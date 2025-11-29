@class AWEUserActionSheetView, NSString;

@interface AWEIMSubscribeSectionController : AWEBaseListSectionController <AWEIMSubscribeCollectionViewCellDelegate>

@property (retain, nonatomic) AWEUserActionSheetView *actionSheetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)didLongPressOnCell:(id)a0;
- (void)__onSettingClik:(id)a0;
- (void)__onUserClik:(id)a0 from:(id)a1;
- (void)__trackEvent:(id)a0 addtionInfo:(id)a1 model:(id)a2;
- (void)__trackUserClickEvent:(id)a0 model:(id)a1;
- (id)__recommendRankingStringWithCardIndex:(long long)a0 articleIndex:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
