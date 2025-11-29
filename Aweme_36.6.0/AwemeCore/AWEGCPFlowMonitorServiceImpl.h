@class NSString;

@interface AWEGCPFlowMonitorServiceImpl : NSObject <IESGCPFlowMonitorService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)bizParamsDic:(id)a0;
- (id)getDouyinFlowAuthTokenWithBizParamModel:(id)a0;
- (void)removeDouyinFlowAuthToken:(id)a0;

@end
