@class FinderSyncTipsShowInfo, NSString, NSArray, NSData, FinderSubTabItem;

@interface WCFinderStreamPrefetchRequestParams : NSObject

@property (retain, nonatomic) NSData *streamBuffer;
@property (nonatomic) int tabType;
@property (nonatomic) unsigned long long objectID;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *containerId;
@property (nonatomic) BOOL byRedDot;
@property (nonatomic) BOOL isByFindPage;
@property (nonatomic) int specialRequestScene;
@property (nonatomic) BOOL ignoreIntevalConf;
@property (nonatomic) BOOL hotTabNeedTopRefresh;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (copy, nonatomic) NSString *tabTipsPath;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) FinderSyncTipsShowInfo *bubbleInfo;
@property (nonatomic) int refreshStatus;
@property (retain, nonatomic) NSArray *otherTabUnreadCacheFeeds;
@property (retain, nonatomic) FinderSubTabItem *subTabItem;

+ (id)prefetchParamsFromStreamParams:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
