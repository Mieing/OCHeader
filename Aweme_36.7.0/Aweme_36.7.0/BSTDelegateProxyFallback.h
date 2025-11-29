@interface BSTDelegateProxyFallback : NSObject

+ (id)defaultFallback;

- (void)unrespondsToSelector;

@end
