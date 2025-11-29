@class AWEGuestHomeHeaderCell;

@interface AWEGuestHomeHeaderSectionController : AWEBaseListSectionController

@property (weak, nonatomic) AWEGuestHomeHeaderCell *headerCell;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)networkingReachabilityDidChange:(id)a0;
- (void)changeHeaderSectionAccessoriesIfNeeded;
- (void)handleClickNameEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)handleClickFollowNumEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)handleClickAvatarEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
