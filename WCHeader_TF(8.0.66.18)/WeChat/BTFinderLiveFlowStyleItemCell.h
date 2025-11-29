@class NSString, MMLiveCDNPlayerView, BTFinderLiveItemViewModel, WCFinderLiveNowView;
@protocol BTFinderLiveFlowStyleItemCellDelegate;

@interface BTFinderLiveFlowStyleItemCell : BTRecommendFinderFlowStyleItemCell <MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) BTFinderLiveItemViewModel *viewModel;
@property (retain, nonatomic) WCFinderLiveNowView *liveTagView;
@property (weak, nonatomic) id<BTFinderLiveFlowStyleItemCellDelegate> liveDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)coverContainerSubviews;
- (double)coverImageRatio;
- (id)realCoverView;
- (id)realTagView;
- (void)prepareForReuse;
- (void)loadData;
- (void)updateLiveTagStateForLiveEnd;
- (void)updateWithItemViewModel:(id)a0;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)setMute:(BOOL)a0;
- (void).cxx_destruct;

@end
