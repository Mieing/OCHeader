@class NSString;

@interface AWEShareFavoriteFolderService : AWEShareCommonImpl <AWEShareFavoriteFolder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithFavoriteFolderModel:(id)a0 onViewController:(id)a1;
- (id)statsShareFavoriteFolderStage;
- (BOOL)p_isSelfCollectionFolder:(id)a0;

@end
