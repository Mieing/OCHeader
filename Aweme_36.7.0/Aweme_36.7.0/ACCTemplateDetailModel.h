@class NSDictionary, NSString;
@protocol ACCMVTemplateModelProtocol;

@interface ACCTemplateDetailModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (readonly, nonatomic) id<ACCMVTemplateModelProtocol> mvTemplateModel;
@property (nonatomic) long long templateID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDictionary *cutsameTemplate;
@property (retain, nonatomic) NSDictionary *classicalTemplate;
@property (retain, nonatomic) NSString *urlPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
