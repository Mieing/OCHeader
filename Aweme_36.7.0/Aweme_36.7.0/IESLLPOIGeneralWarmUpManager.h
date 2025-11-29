@class NSString;

@interface IESLLPOIGeneralWarmUpManager : NSObject <IESLLPOIGeneralWarmUpManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)doPOIWarmUpWithParams:(id)a0;
- (id)warmUpConfig;
- (long long)warmUpType:(id)a0;
- (BOOL)isMatchScene:(id)a0 enterFrom:(id)a1;
- (long long)warmUpPreloadType:(id)a0;

@end
