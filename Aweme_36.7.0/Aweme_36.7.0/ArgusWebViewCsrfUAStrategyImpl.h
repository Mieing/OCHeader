@class NSString, ArgusWebViewCsrfUAConfig;

@interface ArgusWebViewCsrfUAStrategyImpl : NSObject <ArgusStrategyProtocol>

@property (copy, nonatomic) id /* block */ csrfUARegisterBlock;
@property (retain, nonatomic) ArgusWebViewCsrfUAConfig *globalStrategyConfig;
@property (copy, nonatomic) NSString *uaValuePrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier_name;
+ (Class)strategyConfigClass;
+ (id)supportHandlerTypeList;
+ (id)getCSRFUA:(id)a0;
+ (id)sharedInstance;
+ (long long)identifier;

@end
