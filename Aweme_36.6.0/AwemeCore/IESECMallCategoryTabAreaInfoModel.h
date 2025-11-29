@class NSString, IESECMallCategoryTabAreaModel, IESECMallCategoryTabAreaUIConfig;

@interface IESECMallCategoryTabAreaInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMallCategoryTabAreaModel *tabArea;
@property (copy, nonatomic) NSString *tabPanelSchema;
@property (retain, nonatomic) IESECMallCategoryTabAreaUIConfig *tabUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabAreaJSONTransformer;
+ (id)tabUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
