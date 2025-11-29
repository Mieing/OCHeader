@class NSString, NSDictionary;

@interface AWEShareTokenResponseModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSString *statusMessage;
@property (readonly, copy, nonatomic) NSString *command;
@property (readonly, copy, nonatomic) NSString *commandV2;
@property (copy, nonatomic) NSString *tokenTemplate;
@property (readonly, nonatomic) long long expireTime;
@property (readonly, copy, nonatomic) NSString *bizData;
@property (readonly, copy, nonatomic) NSDictionary *extra;
@property (readonly, copy, nonatomic) NSString *eventExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
