@class NSString;

@interface ArgusLynxSignVerifyStrategyImpl : NSObject <ArgusStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier_name;
+ (Class)strategyConfigClass;
+ (id)supportHandlerTypeList;
+ (long long)identifier;

- (void)calculate:(id)a0 verifyResult:(id)a1 strategyContext:(id)a2;
- (long long)shouldDegrade:(long long)a0 verifyResult:(id)a1;
- (void)handleDegradeVerify:(id)a0 degradeType:(long long)a1 signConfig:(id)a2 verifyResult:(id)a3;

@end
