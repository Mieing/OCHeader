@class NSString, WCFinderContact, WCFinderShareEntranceMessageInfo, NSDictionary, NSMutableSet, WCFinderProfileADPlugin, WCFinderFeedArray, WCFinderProfileFeedManager;
@protocol WCFinderProfileViewModelProtocol, WCFinderProfileDataFetcher;

@interface WCFinderProfileViewModel : NSObject <WCFinderDataItemExt, WCFinderContactExt, WCFinderUserPageFetchExt, WCFinderProfileADPluginObserver, WCFinderFeedArrayDelegate>

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) int entryScene;
@property (nonatomic) BOOL isAuthorPerspective;
@property (retain, nonatomic) NSMutableSet *lastStreamItemIds;
@property (retain, nonatomic) WCFinderProfileADPlugin *adPlugin;
@property (weak, nonatomic) id<WCFinderProfileViewModelProtocol> delegate;
@property (readonly, nonatomic) BOOL shouldHiddenContentForPrivateAccount;
@property (nonatomic) unsigned long long reportScene;
@property (readonly, nonatomic) unsigned long long refreshTime;
@property (copy, nonatomic) NSString *fromLiveId;
@property (copy, nonatomic) NSString *fromScene;
@property (readonly, nonatomic) int commentScene;
@property (nonatomic) unsigned long long fromEntranceType;
@property (nonatomic) int customCommentScene;
@property (copy, nonatomic) NSDictionary *additionalClientUdfKV;
@property (nonatomic) long long initOffset;
@property (retain, nonatomic) id<WCFinderProfileDataFetcher> dataFetcher;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderProfileFeedManager *feedManager;
@property (nonatomic) BOOL popAsDeleteEmptyDataItems;
@property (nonatomic) BOOL disableShowInMinimizeWindow;
@property (retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo;
@property (nonatomic) BOOL showPostTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)displayCommentSceneForIsAuthor:(BOOL)a0;

- (id)initWithUsername:(id)a0 fetcher:(id)a1 feedArray:(id)a2 isAuthor:(BOOL)a3 adPlugin:(id)a4;
- (void)dealloc;
- (void)setupCreatorCenterEntranceInfo;
- (id)loadingState;
- (id)pullingState;
- (void)requestFirstPageData:(id /* block */)a0;
- (void)requestNextPageData;
- (void)requestPrePageData;
- (void)deleteFeedWithTid:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onFinderDataItemDeleteFromScene:(int)a0 tid:(id)a1 toastWording:(id)a2;
- (void)onFinderContactUpdate:(id)a0;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void)onFinderContactFollowStatusUpdateFailure:(id)a0;
- (void)updateContact:(id)a0;
- (void)changeStickyTopState:(id)a0 isStickTop:(BOOL)a1 complete:(id /* block */)a2;
- (id)formatStickyTopFailedErrorMessage:(long long)a0 serverMsg:(id)a1;
- (id)mapDataItems:(id)a0;
- (unsigned long long)_calAdFeedInsertPos;
- (void)insertAdFeedAtPosIfNeeded:(unsigned long long)a0;
- (BOOL)removeUnexposedAdFeedIfNeeded:(id)a0;
- (BOOL)feedArray:(id)a0 ignoreContentVM:(id)a1;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (void)removeAdFeedWithTid:(id)a0;
- (void).cxx_destruct;

@end
