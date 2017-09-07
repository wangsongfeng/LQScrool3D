    //
    //  LQScrollView.h
    //  LQScrollView3D
    //
    //  Created by zhengliqiang on 16/12/7.
    //  Copyright © 2016年 zhengliqiang. All rights reserved.
    //

#import <UIKit/UIKit.h>

@interface LQScrollView : UIView<UIScrollViewDelegate>

@property (nonatomic,strong)UIScrollView * LqScrollView;
@property (nonatomic,strong)UIView * midTouchView;;//
@property (nonatomic,strong)UILabel * scoreLab;//评分
@property (nonatomic,strong)UILabel * titleLab;//电影名称
@property (nonatomic,strong)UIButton * enterButton;//

@property (nonatomic,strong)UISwipeGestureRecognizer *swipeGesture;
@property (nonatomic,strong)UISwipeGestureRecognizer *swipeGestureLeft;


-(instancetype)initWithFrame:(CGRect)frame imageArray:(NSMutableArray *)Array;
@end
