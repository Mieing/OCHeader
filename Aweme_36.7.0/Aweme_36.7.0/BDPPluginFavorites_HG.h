@class NSString, BDPFavoritesTipFloating_HG, BDPFavoritesTipBubble_HG, BDPUniqueID;

@interface BDPPluginFavorites_HG : BDPBridgeInstancePlugin <BDPFavoritesTipBubbleDelegate_HG, BDPFavoritesTipFloatingDelegate_HG, BDPAppDidAddedToFavoritesListMessage, BDPToolBarMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFavoritesTipBubble_HG *tipBubble;
@property (retain, nonatomic) BDPFavoritesTipFloating_HG *tipFloating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)tipViewTypeForTypeParam:(id)a0;
+ (long long)tipViewPosForPosParam:(id)a0;
+ (BOOL)isToolBarViewVisible:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMoreButtonFrame:(id)a0;

- (void)toolBarDidClickMoreButton:(id)a0;
- (void)layoutFavoritesBubble:(id)a0 withContainerVC:(id)a1;
- (void)appDidAddedToFavoritesList:(id)a0;
- (void)favoritesTipBubbleDidHidden:(id)a0 closeType:(id)a1 showDuration:(double)a2;
- (void)favoritesTipFloatingDidAddClicked:(id)a0 showDuration:(double)a1;
- (void)favoritesTipFloatingDidHidden:(id)a0 closeType:(id)a1 showDuration:(double)a2;
- (void)buildFavoritesPiugin;
- (void)hideFavoritesFloating;
- (void)hideFavoritesBubble;
- (BOOL)showFavoritesBubble:(id)a0 inContainerVC:(id)a1;
- (BOOL)showFavoritesFloating:(id)a0 withPosition:(long long)a1 inContainerVC:(id)a2;
- (void)hideFavoritesTips:(id)a0;
- (void)getFavoritesListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)addToFavoritesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeFromFavoritesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sortFavoritesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)addToUserFavoritesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)isInUserFavoritesSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showFavoriteGuideWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_showFavoriteGuideForTip:(id)a0 callback:(id /* block */)a1 uniqueID:(id)a2;
- (void)_showFavoriteGuideForBar:(id)a0 callback:(id /* block */)a1 uniqueID:(id)a2;
- (void)_showFavoriteGuideForCustomize:(id)a0 callback:(id /* block */)a1 uniqueID:(id)a2;
- (void)showRevisitGuideWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)needLayoutFavoritesTips:(id)a0 withContainerVC:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
