@class NSString;

@interface AWELiteActivityPopupButtonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long jumpType;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *jumpLink;
@property (nonatomic) long long method;
@property (nonatomic) BOOL isJumpLogin;
@property (copy, nonatomic) NSString *jumpLoginSource;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *tips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jumpTypeJSONTransformer;
+ (id)methodJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
