@class AWEMediaVideoTemplateExtraInfoModel, NSString, NSArray, AWEMediaTemplateCoverModel;

@interface AWEMediaTemplateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *mediaID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *templateDescription;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *templateUri;
@property (retain, nonatomic) AWEMediaTemplateCoverModel *templateCoverModel;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWEMediaVideoTemplateExtraInfoModel *videoTemplateExt;
@property (nonatomic) long long provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoTemplateExtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
