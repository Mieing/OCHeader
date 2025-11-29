@class NSString;

@interface AWEMVChannelLandingRequestAdvanceTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (BOOL)enablePreFetch;
+ (void)preFetch;
+ (BOOL)enableSaveDeviceInfo;
+ (void)execute;

- (id)aAWEPadBizUIAdapter;

@end
