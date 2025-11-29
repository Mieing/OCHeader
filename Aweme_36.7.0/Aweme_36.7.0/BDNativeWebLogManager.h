@interface BDNativeWebLogManager : NSObject

@property (copy, nonatomic) id /* block */ logBlock;

+ (id)sharedInstance;

- (void)printLog:(id)a0;
- (void)configLogBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
