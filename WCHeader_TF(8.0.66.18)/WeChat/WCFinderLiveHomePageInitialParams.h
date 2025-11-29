@class NSString, NSDictionary, NSData, WCFinderRedDotCtrlInfo;

@interface WCFinderLiveHomePageInitialParams : NSObject <WCFinderNavLiveStreamL2CacheKeyProtocol>

@property (nonatomic) unsigned long long scene;
@property (nonatomic) int fromScene;
@property (retain, nonatomic) NSString *fromSceneStr;
@property (nonatomic) unsigned long long relatedObjectId;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;
@property (retain, nonatomic) NSDictionary *reportRefJson;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo;
@property (nonatomic) unsigned long long redDotObjectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)prefetchL2CacheKey;
- (void).cxx_destruct;

@end
