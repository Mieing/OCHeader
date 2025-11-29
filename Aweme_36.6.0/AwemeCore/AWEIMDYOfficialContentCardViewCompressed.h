@class UIView, AWEIMOfficialContentDetailCardViewCompress;

@interface AWEIMDYOfficialContentCardViewCompressed : AWEIMDYOfficialContentCardView

@property (retain, nonatomic) AWEIMOfficialContentDetailCardViewCompress *detailCardView;
@property (retain, nonatomic) UIView *contentContainerView;

- (void)awe_themeDidChange:(long long)a0;
- (double)p_calculateYYlabelWidth;
- (void)p_makeUnfoldedCellContrain;
- (void)p_makeFoldedCellConstrain;
- (void)addConstrains;
- (void)__addSubViews;
- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void)configNumberInfoView;
- (BOOL)hasNumberInfoStruct;
- (void).cxx_destruct;

@end
