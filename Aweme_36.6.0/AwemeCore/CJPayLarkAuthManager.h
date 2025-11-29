@class NSString, NSDictionary;

@interface CJPayLarkAuthManager : NSObject <LarkSSO.LarkSSODelegate, CJPayLarkAuthService>

@property (copy, nonatomic) NSString *larkAppId;
@property (copy, nonatomic) NSString *larkScheme;
@property (nonatomic) BOOL wakingApp;
@property (copy, nonatomic) NSDictionary *dict;
@property (copy, nonatomic) id /* block */ completion;

+ (void)registerComponents;
+ (id)sharedManager;

- (void)launchlarkSSOWithParams:(id)a0 completion:(id /* block */)a1;
- (void)lkSSODidReceiveWithResponse:(id)a0;
- (void)appDidInForeground;
- (BOOL)p_isInhouse;
- (void)p_requestUserinfoWithCode:(id)a0;
- (void)p_exeCompletionWithResult:(id)a0;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
