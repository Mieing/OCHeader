@class NSString;

@interface AWEKiteInitTask : NSObject <AWEAppBytedSettingMessage, HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)execute;
+ (id)defaultInstance;

- (void)bytedSettingDidChange;
- (id)init;

@end
