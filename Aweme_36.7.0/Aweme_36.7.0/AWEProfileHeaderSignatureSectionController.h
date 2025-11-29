@class AWEProfileHeaderSignatureCollectionViewCell, NSMutableArray, NSString;

@interface AWEProfileHeaderSignatureSectionController : AWEBaseListSectionController <AWEProfileHeaderSignatureCollectionViewCellDelegate>

@property (retain, nonatomic) NSMutableArray *binds;
@property (retain, nonatomic) AWEProfileHeaderSignatureCollectionViewCell *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)editSignature;
- (void)trackLiveTiemNoticeShowEvent;
- (void)didTapExpand;
- (void)eventTrack4IntroShowWithEnterMethod:(id)a0 status:(id)a1 textLines:(unsigned long long)a2;
- (void)showEditProfileFromSignature;
- (void)eventTrackBarClickWithNoticeText:(id)a0;
- (void)eventTrackBarShowWithNoticeText:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
