@class NSString;

@interface AWEHPTabBarBGSkinResource : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *geckoChannel;
@property (copy, nonatomic) NSString *leftPathLight;
@property (copy, nonatomic) NSString *leftPathDark;
@property (copy, nonatomic) NSString *rightPathLight;
@property (copy, nonatomic) NSString *rightPathDark;
@property (copy, nonatomic) NSString *backgroundPathLight;
@property (copy, nonatomic) NSString *backgroundPathDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
