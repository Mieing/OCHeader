@class UIView, DUXBaseImageView, DUXBaseLabel, AWEECOMIMExtraCardModel, NSString, AWEECOMIMExtraOrderOldView, YYLabel, DUXBaseButton, BDPCDDynamicCardPriceView;
@protocol AWEECOMIMExtraOrderViewDelegate;

@interface AWEECOMIMExtraOrderView : AWEECOMIMCustomBaseView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *fullBgView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *logoView;
@property (retain, nonatomic) DUXBaseImageView *importantActivitiesView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *subTitleLabel;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *priceView;
@property (retain, nonatomic) DUXBaseButton *squareButton;
@property (retain, nonatomic) DUXBaseButton *closeButton;
@property (retain, nonatomic) DUXBaseButton *sendButton;
@property (retain, nonatomic) AWEECOMIMExtraOrderOldView *orderOldView;
@property (copy, nonatomic) id /* block */ animationCompletionBlock;
@property (retain, nonatomic) AWEECOMIMExtraCardModel *itemModel;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<AWEECOMIMExtraOrderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })designSizeWithWidth:(double)a0 style:(long long)a1;
+ (double)horizontalMarginWithStyle:(long long)a0;

- (void)closeButtonClick:(id)a0;
- (void)startShowAnimation;
- (void)updateWithItemModel:(id)a0 style:(long long)a1;
- (void)startHideAnimation;
- (void)sendButtonClick:(id)a0;
- (void)updateWithRectangleNewStyle;
- (void)updateAccessibilityElement;
- (void)updateWithSquareStyle;
- (void)updateWithRectangleOldStyle;
- (void)squareButtonClick:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)customInit;

@end
