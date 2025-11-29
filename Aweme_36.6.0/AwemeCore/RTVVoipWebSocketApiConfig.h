@class NSString;

@interface RTVVoipWebSocketApiConfig : JSONModel

@property (copy, nonatomic) NSString *apiName;
@property (nonatomic) long long service;
@property (nonatomic) long long method;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
