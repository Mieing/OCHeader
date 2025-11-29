@class NSString;

@interface AWEFeedDislikeService : HTSService <AWEFeedDislikeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)latestDislikeItemsStringWithReferString:(id)a0;
- (id)dislikeButtonText;
- (BOOL)shouldShowDislikeSecondStagePanelWithAwemeModel:(id)a0 referString:(id)a1;
- (void)dislikeSecondStagePanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldShowBottomNotificationForLongPressPanel:(id)a0 referString:(id)a1;
- (BOOL)shouldShowDislikeV2Panel:(id)a0 referString:(id)a1;
- (void)dislikeBottomNotificationPanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 dismissNotificationWhenClickOutSide:(BOOL)a3 click:(id /* block */)a4;
- (void)dislikePanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 multipleSelection:(id /* block */)a3 cancel:(id /* block */)a4;
- (void)dislikeV2PanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 multipleSelection:(id /* block */)a3 cancel:(id /* block */)a4;
- (long long)dislikeActionPosition;
- (BOOL)enablePanelDislikeOptimizationWithModel:(id)a0 referString:(id)a1;
- (id)dislikeButtonTextForPanel:(id)a0;
- (BOOL)enableDislikeTextAndIconOptimize;
- (id)optimizedDislikeButtonText;
- (id)optimizedDislikeIcon;
- (id)optimizedDislikeShareIconV2;
- (id)optimizedDislikeShareIcon;
- (id)optimizedDislikeShareIconForDarkStyle;
- (void)addDislikeModelIfNeededWithReferString:(id)a0 model:(id)a1;
- (id)longPressDislikePanelConfig;
- (void)recordVideoPlayInteraction:(id)a0;
- (void)recordUserDislikeInteraction:(id)a0;
- (void)recordUserSkipInteraction:(id)a0;
- (void)recordUserSkipInteractionForDislike:(id)a0;
- (void)cleanRecordUserSkipInteractionForDislike;
- (BOOL)userHasSkippedEnoughVideosForDislikeToast;
- (id)getDislikeItemsInSessionArray;
- (id)getSkipItemsInSessionArray;
- (BOOL)shouldShowDislikeInPanel:(id)a0;
- (id)searchQueryDislikeDictWithReferString:(id)a0;

@end
