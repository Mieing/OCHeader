@class AFDColorRingTrackSet;

@interface AWEFansListUserListSectionController : AWERelationUserListBaseSectionController

@property (retain, nonatomic) AFDColorRingTrackSet *ringTrack;

+ (Class)aAWERelationDOUYINHTSAdapterClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)enterFrom;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (id)aAWERelationDOUYINHTSAdapter;
- (unsigned long long)activeUserSourceType;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (long long)type;
- (BOOL)showSeparator;
- (Class)cellClass;
- (BOOL)isMine;
- (id)pageIdentifier;
- (Class)footerViewClass;

@end
