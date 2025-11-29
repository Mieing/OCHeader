@class MMFinderLivePromoteDisplayLeaseToken, MMUIButton;
@protocol MMFinderLivePromoteDisplayLeasePromotionDelegate;

@interface MMFinderLivePromoteDisplayLeaseView : UIView

@property (retain, nonatomic) MMUIButton *closeButton;
@property (weak, nonatomic) MMFinderLivePromoteDisplayLeaseToken *leaseToken;
@property (nonatomic) BOOL userDismissable;
@property (nonatomic) BOOL closeButtonHidden;
@property (weak, nonatomic) id<MMFinderLivePromoteDisplayLeasePromotionDelegate> promotionDelegate;

- (id)initWithLeaseToken:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)addSubview:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)onCloseButtonTapped;
- (void).cxx_destruct;

@end
