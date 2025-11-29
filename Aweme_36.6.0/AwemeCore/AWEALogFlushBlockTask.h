@class NSDictionary, NSString;

@interface AWEALogFlushBlockTask : NSObject <NunkiMessage, HTSBootTask>

@property (retain, nonatomic) NSDictionary *instanceConfigs;
@property BOOL ifNeedRecoverFlush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)execute;
+ (id)shared;

- (void)didReceiveResourceNotification;
- (void)alogFlushBlock:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
