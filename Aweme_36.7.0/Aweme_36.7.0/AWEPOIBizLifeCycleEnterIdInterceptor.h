@class NSDictionary, NSSet, NSString;

@interface AWEPOIBizLifeCycleEnterIdInterceptor : NSObject <AWEPOITrackerInterceptor>

@property (copy, nonatomic) NSDictionary *enterLogConfigMap;
@property (copy, nonatomic) NSDictionary *exitLogConfigMap;
@property (copy, nonatomic) NSSet *logSet;
@property (nonatomic) BOOL isInit;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
- (id)newTrackParamsWithEvent:(id)a0 oldParams:(id)a1 btmInfo:(id)a2;
- (id)getValidBTMResponder:(id)a0;
- (void)getEnterIdLogConfigMap;
- (void).cxx_destruct;
- (id)init;

@end
