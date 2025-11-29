@protocol BURexxarEngine;

@interface BUDynamicPlugin : NSObject

@property (weak, nonatomic) id<BURexxarEngine> engine;

+ (id)sharedPlugin;
+ (unsigned long long)authType;
+ (unsigned long long)instanceType;

- (void).cxx_destruct;

@end
