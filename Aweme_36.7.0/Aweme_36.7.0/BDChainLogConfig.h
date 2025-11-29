@interface BDChainLogConfig : NSObject

@property (class, copy, nonatomic) id /* block */ wrappeeClassBlock;

+ (BOOL)addSelfAddr;
+ (BOOL)globalEnable;

@end
