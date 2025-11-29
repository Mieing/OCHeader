@class NSString, NSMutableDictionary, NSURL, IESECImageXReplaceTemplatesConfig, IESECImageXReplaceOldTemplatesConfig, UIImage;

@interface IESECImageXURLEditor : NSObject <IESECImageXURLEditorInterface>

@property (retain, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSString *imageURIMD5;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *templateParamsString;
@property (retain, nonatomic) NSMutableDictionary *templateParams;
@property (copy, nonatomic) NSString *imageFormat;
@property (retain, nonatomic) IESECImageXReplaceTemplatesConfig *templateConfig;
@property (retain, nonatomic) IESECImageXReplaceOldTemplatesConfig *oldTemplateConfig;
@property (nonatomic) long long urlType;
@property (nonatomic) BOOL isGoodsPicBucket;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) BOOL isImageXURL;
@property (copy, nonatomic) NSString *replaceTargetTemplateName;
@property (copy, nonatomic) NSString *replaceTargetServiceId;
@property (copy, nonatomic) NSString *replaceTargetFormat;
@property (retain, nonatomic) IESECImageXReplaceTemplatesConfig *replaceTargetTemplate;
@property (retain, nonatomic) UIImage *replacePlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
