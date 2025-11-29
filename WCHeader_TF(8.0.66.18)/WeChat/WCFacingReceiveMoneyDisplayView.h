@class NSString, UIView;

@interface WCFacingReceiveMoneyDisplayView : MMUIView <CAAnimationDelegate> {
    UIView *backgroundView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_frame;
}

@property (retain, nonatomic) NSString *accessTips;
@property (nonatomic) BOOL bShowActionBar;
@property (nonatomic) unsigned int codeType;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserName:(id)a0 DisplayName:(id)a1 TotalMoney:(id)a2 Frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 codeType:(unsigned int)a4 showActionBar:(BOOL)a5;
- (id)initWithUserDisplayName:(id)a0 TotalMoney:(id)a1 HeadImgUrl:(id)a2 Frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 codeType:(unsigned int)a4 showActionBar:(BOOL)a5;
- (double)setupBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupDescContentWithDisplayName:(id)a0 totalMoney:(id)a1 startY:(double)a2;
- (void)layoutSubviews;
- (void)showStartAnimation;
- (void)showEndAnimation:(struct CGPoint { double x0; double x1; })a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)closeView;
- (void).cxx_destruct;

@end
