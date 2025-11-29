@class NSString;

@interface AWELynxCommonAdapter : NSObject <AWELynxCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPrefixToAk;
+ (Class)weakTargetClass;
+ (id)defaultPrefixToAkInDebug;
+ (id)defaultAkToPrefixListInDebug;

- (id)weakTarget;

@end
