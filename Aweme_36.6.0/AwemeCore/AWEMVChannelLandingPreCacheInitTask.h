@class NSString;

@interface AWEMVChannelLandingPreCacheInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (BOOL)enablePreRead;
+ (void)preReadColdCache;
+ (void)execute;

- (id)aAWEPadBizUIAdapter;

@end
