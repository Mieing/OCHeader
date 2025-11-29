@class NSString, NSArray;

@interface ACCPublishUserDeclarationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *defaultImageUrl;
@property (copy, nonatomic) NSArray *options;
@property (copy, nonatomic) NSString *buttonTextCancel;
@property (copy, nonatomic) NSString *buttonTextSumbmit;
@property (copy, nonatomic) NSString *introductionText;
@property (copy, nonatomic) NSString *userDeclarationTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
