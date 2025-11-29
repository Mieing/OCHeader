@class NSString, WCFinderLiveTabInfo, NSData, NSMutableArray;

@interface WCFinderLiveStreamPreFetchBaseParams : NSObject

@property (retain, nonatomic) WCFinderLiveTabInfo *tabInfo;
@property (nonatomic) unsigned long long pullType;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long relatedObjectId;
@property (nonatomic) int fromScene;
@property (retain, nonatomic) NSString *fromSceneStr;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *byPassInfo;
@property (retain, nonatomic) NSMutableArray *unreadDataItems;

- (id)prefetchCacheHashKey;
- (BOOL)isRequestEqaulToCache:(id)a0;
- (void).cxx_destruct;

@end
