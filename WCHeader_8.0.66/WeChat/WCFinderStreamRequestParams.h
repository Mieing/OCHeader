@class NSData, NSString, NSArray, WCFinderStreamEntranceReportModel, FinderSubTabItem, WCFinderTipsShowEntranceExtInfo, FinderSyncTipsShowInfo, NSMutableArray, FinderCommByPass, WCFinderOpenTimelineParams, FinderClientStatus, WCFinderLocationInfo;

@interface WCFinderStreamRequestParams : NSObject

@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (retain, nonatomic) WCFinderLocationInfo *location;
@property (nonatomic) unsigned long long objectID;
@property (nonatomic) BOOL objectFeedIsNotTop;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) FinderSyncTipsShowInfo *bubbleInfo;
@property (retain, nonatomic) NSMutableArray *stats;
@property (copy, nonatomic) NSString *partialExposedObjectId;
@property (retain, nonatomic) NSMutableArray *unreadItems;
@property (retain, nonatomic) NSArray *unreadCacheTidArray;
@property (nonatomic) int specialRequestScene;
@property (copy, nonatomic) NSString *tabTipsUsername;
@property (nonatomic) BOOL prefetchConsumedFlag;
@property (retain, nonatomic) NSData *rerankLastBuffer;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (copy, nonatomic) NSString *tabTipsPath;
@property (nonatomic) unsigned long long guideBarObjectId;
@property (retain, nonatomic) WCFinderOpenTimelineParams *openTLParams;
@property (nonatomic) unsigned int enterProb;
@property (retain, nonatomic) NSData *cardBuffer;
@property (retain, nonatomic) NSMutableArray *topObjects;
@property (retain, nonatomic) FinderCommByPass *commByPass;
@property (retain, nonatomic) WCFinderStreamEntranceReportModel *entranceReportModel;
@property (copy, nonatomic) NSString *fluencyReportSceneKey;
@property (retain, nonatomic) NSArray *otherTabUnreadCacheFeeds;
@property (retain, nonatomic) NSData *hotTabLastBuff;
@property (nonatomic) BOOL hotTabNeedTopRefresh;
@property (retain, nonatomic) NSArray *addStatsFeedArray;
@property (nonatomic) BOOL isByFindPage;
@property (nonatomic) BOOL dontCacheResultPage;
@property (copy, nonatomic) NSString *relateTid;
@property (copy, nonatomic) NSString *relateNonceId;
@property (nonatomic) unsigned long long relateRequestScene;
@property (retain, nonatomic) FinderSubTabItem *subTabItem;
@property (retain, nonatomic) WCFinderTipsShowEntranceExtInfo *finderEntranceExtInfo;

+ (id)genFinderUnreadItemsFromFinderDataItems:(id)a0 tabType:(int)a1 commentScene:(int)a2;

- (id)init;
- (id)getFinderUnreadItemsWithTabType:(int)a0 commentScene:(int)a1;
- (void).cxx_destruct;

@end
