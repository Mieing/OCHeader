@class NSString;

@interface IESLiveGameCPTrackContextUtility : NSObject <IESLiveGameCPTrackContextUtilityInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)util;

- (id)gameCPPublicContextParams;
- (void)reportGameCPEvent:(id)a0 moduleName:(id)a1 routeParams:(id)a2 locationParams:(id)a3 moduleAttr:(id)a4 extraParams:(id)a5;

@end
