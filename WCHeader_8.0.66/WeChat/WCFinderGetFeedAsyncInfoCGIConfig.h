@class NSString, NSMutableDictionary, NSArray, CLLocation, WCFinderPushFeedViewProductParams, NSData;

@interface WCFinderGetFeedAsyncInfoCGIConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *feedProductIdMap;
@property (copy, nonatomic) NSString *uxinfo;
@property (nonatomic) int searchScene;
@property (nonatomic) int triggerScene;
@property (retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo;
@property (nonatomic) long long reportScene;
@property (retain, nonatomic) NSArray *appendScenes;
@property (retain, nonatomic) CLLocation *customLocation;
@property (retain, nonatomic) NSData *asyncLoadInfoBuffer;

- (id)init;
- (BOOL)notDeleteJumpInfoContainer;
- (void)saveProductId:(unsigned long long)a0 withFeedId:(id)a1;
- (unsigned long long)getProductIdWithFeedId:(id)a0;
- (void).cxx_destruct;

@end
