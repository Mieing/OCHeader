@class NSArray, MMFinderLiveCouponCardView, MMFinderLiveTaskId, NSString, UIButton;
@protocol MMFinderLiveCouponCardsMaskViewDelegate;

@interface MMFinderLiveCouponCardsMaskView : UIView <MMFinderLiveCouponCardViewDelegate>

@property (weak, nonatomic) id<MMFinderLiveCouponCardsMaskViewDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveCouponCardView *cardView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSArray *cardInfos;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 cardInfos:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)initSubviews;
- (void)initCardsView;
- (void)initCloseButton;
- (void)layoutSubviews;
- (void)onCouponCardButtonClicked:(id)a0;
- (void)onCloseButtonClicked;
- (void).cxx_destruct;

@end
