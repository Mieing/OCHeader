@class NSString, AFDCloseFriendsMomentContext;
@protocol AFDCloseFriendsSettingsPanelListSectionControllerDelegate;

@interface AFDCloseFriendsSettingsPanelListSectionController : AWEBaseListSectionController <AFDCloseFriendsSettingsPanelCellViewDelegate>

@property (copy, nonatomic) NSString *pageIdentifier;
@property (weak, nonatomic) id<AFDCloseFriendsSettingsPanelListSectionControllerDelegate> delegate;
@property (retain, nonatomic) AFDCloseFriendsMomentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (BOOL)groupEnable;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (id)init;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (Class)headerViewClass;

@end
