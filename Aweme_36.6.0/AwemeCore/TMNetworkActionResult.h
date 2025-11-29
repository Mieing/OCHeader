@class NSString, NSArray, NSDictionary;
@protocol TMNetworkDecryptBodyProtocol;

@interface TMNetworkActionResult : NSObject

@property (readonly, nonatomic) unsigned long long actionResultType;
@property (readonly, nonatomic) unsigned long long paramsType;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *replaceValue;
@property (readonly, copy, nonatomic) NSArray *bodyFields;
@property (readonly, nonatomic) id<TMNetworkDecryptBodyProtocol> bodyDecryptor;
@property (readonly, copy, nonatomic) NSDictionary *passThroughInfo;
@property (readonly, copy, nonatomic) id /* block */ completion;

+ (id)actionResultDropRequest:(id /* block */)a0;
+ (id)actionResultOnParamsType:(unsigned long long)a0 removeKey:(id)a1 completion:(id /* block */)a2;
+ (id)actionResultOnParamsType:(unsigned long long)a0 addKey:(id)a1 value:(id)a2 completion:(id /* block */)a3;
+ (id)actionResultDecryptWholeBodyWithDecryptor:(id)a0 completion:(id /* block */)a1;
+ (id)actionResultDecryptBodyFields:(id)a0 decryptor:(id)a1 completion:(id /* block */)a2;
+ (id)actionResultFastPass:(id /* block */)a0;
+ (id)actionResultOnParamsType:(unsigned long long)a0 replaceKey:(id)a1 value:(id)a2 replaceValue:(id)a3 completion:(id /* block */)a4;
+ (id)actionResultSetPassThroughInfo:(id)a0 completion:(id /* block */)a1;

- (id)initWithActionResultType:(unsigned long long)a0 paramsType:(unsigned long long)a1 key:(id)a2 value:(id)a3 replaceValue:(id)a4 bodyFields:(id)a5 bodyDecryptor:(id)a6 passThroughInfo:(id)a7 completion:(id /* block */)a8;
- (void).cxx_destruct;

@end
