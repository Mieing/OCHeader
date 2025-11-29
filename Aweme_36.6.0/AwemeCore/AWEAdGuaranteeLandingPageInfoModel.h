@class AWEAdGuaranteeInfoTagImageModel, NSString;

@interface AWEAdGuaranteeLandingPageInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAdGuaranteeInfoTagImageModel *tagImageUrlModel;
@property (copy, nonatomic) NSString *descriptionInfo;
@property (copy, nonatomic) NSString *guaranteeUrlString;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
