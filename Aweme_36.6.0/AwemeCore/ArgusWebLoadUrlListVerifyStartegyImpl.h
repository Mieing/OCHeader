@class NSString;

@interface ArgusWebLoadUrlListVerifyStartegyImpl : NSObject <ArgusStrategyProtocol>

@property (nonatomic) BOOL hasSetSeclinkWhiteList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier_name;
+ (Class)strategyConfigClass;
+ (id)supportHandlerTypeList;
+ (long long)identifier;

- (void)calculate:(id)a0 verifyResult:(id)a1 strategyContext:(id)a2;
- (void)verifyBlackList:(id)a0 startegyConfig:(id)a1 verifyResult:(id)a2;

@end
