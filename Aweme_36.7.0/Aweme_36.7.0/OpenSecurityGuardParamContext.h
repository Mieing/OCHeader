@class NSString, NSMutableDictionary;

@interface OpenSecurityGuardParamContext : NSObject

@property (retain, nonatomic) NSString *reserve1;
@property (retain, nonatomic) NSString *reserve2;
@property (retain, nonatomic) NSString *appKey;
@property (nonatomic) long long requestType;
@property (retain, nonatomic) NSMutableDictionary *paramDict;

+ (id)createParamContextWithAppKey:(id)a0 paramDict:(id)a1 requestType:(long long)a2;

- (void).cxx_destruct;
- (id)init;

@end
