@class PAGFile, PAGView;

@interface MMFinderLiveAnchorCustomizeRewardStylePreviewView : UIView

@property (retain, nonatomic) PAGFile *previewPagFile;
@property (retain, nonatomic) PAGView *previewPagView;

- (id)init;
- (void)layoutSubviews;
- (void)updateCurrentPAGComposition:(id)a0;
- (void)addAlphaMask:(id)a0;
- (void).cxx_destruct;

@end
