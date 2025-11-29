@class MMStoreEmoticonDesignerPackBrowseViewController, NSString, EmoticonStoreDesingerIPViewCell, EmoticonStoreItem, EmoticonFinderDesignerDataCenter;
@protocol EmoticonFinderDesignerContentLogicDelegate;

@interface EmoticonFinderDesignerContentLogic : NSObject <EmoticonFinderDesignerDataCenterDelegate, EmoticonHalfScreenSendViewDelegate, MMStoreEmotionDesignerPackBrowseViewControllerDelegate, EmoticonStoreDesingerIPViewCellDelegate, EmoticonDesignerRichPortfolioCellDelegate, IStoreEmotionRewardExt>

@property (weak, nonatomic) EmoticonFinderDesignerDataCenter *dataCenter;
@property (weak, nonatomic) EmoticonStoreDesingerIPViewCell *ipCell;
@property (retain, nonatomic) EmoticonStoreItem *rewardingItem;
@property (weak, nonatomic) MMStoreEmoticonDesignerPackBrowseViewController *packBrowseVC;
@property (weak, nonatomic) id<EmoticonFinderDesignerContentLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCellsFor:(id)a0;

- (id)initWithDataCenter:(id)a0;
- (unsigned long long)totalEmojiCount;
- (unsigned long long)totalEmoticonCount;
- (id)getCellForColllectionView:(id)a0 type:(unsigned long long)a1 indexPath:(id)a2;
- (id)displayItems:(unsigned long long)a0;
- (unsigned long long)cellCountForType:(unsigned long long)a0;
- (double)cellHeightForType:(unsigned long long)a0 atIndexPath:(id)a1 collectionViewWidth:(double)a2;
- (id)displayingTypes;
- (BOOL)hasMoreStatusForType:(unsigned long long)a0;
- (void)onCellTouchedForType:(unsigned long long)a0 index:(unsigned long long)a1;
- (void)openViewMoreForType:(unsigned long long)a0;
- (id)displayingIpSets;
- (void)onSelectIPSetAtIndex:(unsigned long long)a0;
- (BOOL)isIPSetsHasMore;
- (void)loadMoreForIPSets;
- (id)getViewController;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (void)OnRewardStoreItem:(id)a0;
- (void)openBegVCWith:(id)a0 storeItem:(id)a1;
- (void)OnOpenEmojiHalfScreen:(id)a0;
- (void)OnOpenDetailViewForItem:(id)a0;
- (void)onGetEmotionRewardFinishedWithPid:(id)a0 RewardInfo:(id)a1;
- (void)onGotTotalEmoticonCount:(unsigned long long)a0 emojiCount:(unsigned long long)a1;
- (void)onFirstFetchFinished;
- (void)onFirstFetchFailed;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)a0 andHasMore:(BOOL)a1;
- (void)onFetchEmoticonDataFailedForType:(unsigned long long)a0;
- (void)onNeedReloadForDataChange;
- (id)sdkRequestID;
- (void).cxx_destruct;

@end
