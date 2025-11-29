@class NSString, AWECompanyHeaderPictureCertInfoModel;

@interface AWEModuleMap : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECompanyHeaderPictureCertInfoModel *companyHeaderPictureCertInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)companyHeaderPictureCertInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
