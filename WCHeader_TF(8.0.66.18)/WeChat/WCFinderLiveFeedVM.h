@class MMFinderLiveFeedDataLogic, NSString, WCFinderLiveInfo, WCFinderDataItem, FinderJumpInfo;

@interface WCFinderLiveFeedVM : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSString *sessionExtraKey;
@property (weak, nonatomic) MMFinderLiveFeedDataLogic *feedDataLogic;
@property (readonly, nonatomic) WCFinderLiveInfo *liveInfo;
@property (nonatomic) BOOL enterLiveRoom;
@property (copy, nonatomic) NSString *channelExtra;
@property (nonatomic) BOOL hasEnteredLive;
@property (nonatomic) unsigned long long landScapeEnterType;
@property (nonatomic) unsigned long long landscapeStartTimeInMs;
@property (nonatomic) BOOL hasTriedFetchingSearchComponent;
@property (retain, nonatomic) FinderJumpInfo *searchComponentInfo;

- (id)initWithDataItem:(id)a0 sessionExtraKey:(id)a1;
- (id)toLiveContentVM;
- (void)bindFeedDataLogic:(id)a0;
- (BOOL)enableShowFeedBarrageSwitch;
- (BOOL)currentUserFeedBarrageSwitch;
- (void)updateUserEnableFeedBarrage:(BOOL)a0;
- (void)reportClickRotateToPortrait;
- (void)reportLandscapeStart;
- (void)reportLandscapeEnd;
- (void).cxx_destruct;

@end
