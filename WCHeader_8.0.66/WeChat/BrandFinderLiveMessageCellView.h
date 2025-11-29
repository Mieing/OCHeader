@class BrandFinderLiveBaseCardView, BrandFinderLiveMessageViewModel, NSString;

@interface BrandFinderLiveMessageCellView : BaseMessageCellView <BrandFinderLiveMessageCellViewDelegate>

@property (retain, nonatomic) BrandFinderLiveBaseCardView *cardView;
@property (readonly, nonatomic) BrandFinderLiveMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onAppear;
- (BOOL)canBeReused;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)doForward;
- (void)setHighlighted:(BOOL)a0;
- (id)operationMenuItems;
- (void)brandFinderLiveMessageCellViewLiveStatusChanged;
- (void)brandFinderLiveMessageCellViewReplayStatusChanged;
- (void)brandFinderLiveMessageCellViewRecommendReasonChanged;
- (void).cxx_destruct;

@end
