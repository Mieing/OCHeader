@class RichTextView, NSMutableDictionary, WCFinderLiveNowView, UIView, BrandFinderLiveCardViewModel, MMUILabel;
@protocol BrandFinderLiveBaseCardViewDelegate;

@interface BrandFinderLiveBaseCardView : MMUIView

@property (weak, nonatomic) id<BrandFinderLiveBaseCardViewDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *extraData;
@property (retain, nonatomic) BrandFinderLiveCardViewModel *viewModel;
@property (retain, nonatomic) MMUILabel *recommendReasonLabel;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) WCFinderLiveNowView *liveNowView;
@property (retain, nonatomic) WCFinderLiveNowView *liveOverView;

- (void)updateViewModel:(id)a0;
- (void)updateLiveStatus:(BOOL)a0 statusWording:(id)a1;
- (void)internalUpdateLiveStatus:(BOOL)a0 statusWording:(id)a1;
- (void)updateRecommendReason:(id)a0;
- (void)internalUpdateRecommendReason:(id)a0;
- (void)setHighlightViewHidden:(BOOL)a0;
- (void)onLiveCardViewClick:(id)a0;
- (void)onLiveCardViewLongClick:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
