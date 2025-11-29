@class NSString;

@interface AWEMVChannelPreCacheInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preReadColdCache;
+ (void)execute;


@end
