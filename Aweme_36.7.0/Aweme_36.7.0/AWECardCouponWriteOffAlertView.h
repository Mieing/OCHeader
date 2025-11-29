@class AWEUIButton, NSString, UIView;

@interface AWECardCouponWriteOffAlertView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEUIButton *groupBuyButton;
@property (retain, nonatomic) AWEUIButton *disCountButton;
@property (retain, nonatomic) AWEUIButton *cancelButton;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIView *seperatorEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertViewWithGroupBuyBlock:(id /* block */)a0 disCountBlock:(id /* block */)a1;
- (void)p_hindWithDuration:(double)a0;
- (void)customMaskViewTapAction:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)show;
- (void)cancelAlertView;

@end
