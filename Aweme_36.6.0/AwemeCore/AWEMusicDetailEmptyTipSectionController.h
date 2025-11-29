@class UIView;

@interface AWEMusicDetailEmptyTipSectionController : AWEBaseDetailHeaderSectionController

@property (retain, nonatomic) UIView *emptyTipView;
@property (nonatomic) double emptySectionHeight;
@property (nonatomic) double labelTopset;

- (void)didBindSectionViewModel;
- (id)detailHeaderView;
- (void)updateHeaderViewWithModel:(id)a0;
- (BOOL)musicDetailRelatedEnable;
- (void).cxx_destruct;
- (id)init;
- (double)sectionHeight;

@end
