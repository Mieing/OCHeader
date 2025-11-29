@class NSDictionary, NSMutableDictionary;

@interface TTBridgeMethodInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *authTypeMDic;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ handlerWithCommand;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly, copy, nonatomic) NSDictionary *authTypes;

- (void)registerWithEngineType:(long long)a0 authType:(unsigned long long)a1 bridgeName:(id)a2;
- (id)initWithEngineType:(long long)a0 authType:(unsigned long long)a1 bridgeName:(id)a2;
- (void).cxx_destruct;

@end
