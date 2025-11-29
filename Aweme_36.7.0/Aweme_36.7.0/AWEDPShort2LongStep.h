@class NSString;

@interface AWEDPShort2LongStep : AWEWorkflowStep <AWEDPShort2LongStepCommonAdapter, AWEDPShort2LongStepPrivateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDPShort2LongStepCommonAdapterClass;

- (void)onStep:(id)a0 linkSession:(id)a1;
- (id)shortAllowList;
- (id)extractRedirectURL:(id)a0;
- (void)logShort2LongFailed:(id)a0;
- (void)reportOpenURL:(id)a0 resultURL:(id)a1 isSuccess:(BOOL)a2;
- (id)aAWEDPShort2LongStepCommonAdapter;
- (BOOL)checkAPPScheme:(id)a0;

@end
