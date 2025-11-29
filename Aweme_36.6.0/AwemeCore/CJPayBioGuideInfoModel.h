@class NSString;

@interface CJPayBioGuideInfoModel : JSONModel <CJPayCommonProtocolModelBuildProtocol>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL choose;
@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *guideStyle;
@property (copy, nonatomic) NSString *btnDesc;
@property (nonatomic) BOOL isShowButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildCommonProtocolModel;
- (void).cxx_destruct;

@end
