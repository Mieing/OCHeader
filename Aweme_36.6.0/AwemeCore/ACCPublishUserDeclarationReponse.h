@class NSString, ACCPublishUserDeclarationModel;

@interface ACCPublishUserDeclarationReponse : AWEBaseApiModel

@property (retain, nonatomic) ACCPublishUserDeclarationModel *data;
@property (copy, nonatomic) NSString *userDeclarationTips;
@property (nonatomic) BOOL isUserDeclarationClose;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
