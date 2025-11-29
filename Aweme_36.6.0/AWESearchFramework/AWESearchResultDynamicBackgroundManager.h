@class AWESearchBackgroundView, AWEGeneralSearchBackgroundModel;

@interface AWESearchResultDynamicBackgroundManager : AWEGeneralSearchBackgroundManager

@property (retain, nonatomic) AWESearchBackgroundView *dynamicBackgroundView;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *backgroundModel;

- (BOOL)enableUserbackMaskBackgroundColor;
- (id)searchResultDynamicCoverView;
- (id)searchResultDynamicBackgroundView;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
