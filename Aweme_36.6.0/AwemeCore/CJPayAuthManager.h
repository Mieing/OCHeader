@class NSString;

@interface CJPayAuthManager : NSObject

@property (copy, nonatomic) NSString *authAliPayScheme;
@property (nonatomic) BOOL isInAuthing;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)shared;

- (BOOL)canProcessURL:(id)a0;
- (void)registerAuthAliPayScheme:(id)a0;
- (void)authAliPay:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
