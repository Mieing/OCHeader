@class ACCVideoTemplateExtModel, NSString, ACCTemplateCoverModel, ACCImageTemplateExtModel;

@interface ACCImageTemplateDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *mediaID;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *templateDesc;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *templateMD5;
@property (copy, nonatomic) NSString *templateURI;
@property (retain, nonatomic) ACCTemplateCoverModel *cover;
@property (copy, nonatomic) NSString *tags;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long userCount;
@property (nonatomic) long long status;
@property (retain, nonatomic) ACCImageTemplateExtModel *imageTemplateExt;
@property (retain, nonatomic) ACCVideoTemplateExtModel *videoTemplateExt;
@property (nonatomic) long long provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)imageTemplateExtJSONTransformer;
+ (id)videoTemplateExtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
