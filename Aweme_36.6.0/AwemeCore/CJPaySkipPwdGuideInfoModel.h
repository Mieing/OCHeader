@class NSString, NSArray;
@protocol BDPaySkipPwdSubGuideInfoModel;

@interface CJPaySkipPwdGuideInfoModel : CJPayBaseGuideInfoModel <CJPayCommonProtocolModelBuildProtocol>

@property (nonatomic) BOOL isChecked;
@property (nonatomic) BOOL isSelectedManually;
@property (nonatomic) BOOL isShowButton;
@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSArray<BDPaySkipPwdSubGuideInfoModel> *subGuide;
@property (nonatomic) long long quota;
@property (copy, nonatomic) NSString *guideStyle;
@property (copy, nonatomic) NSString *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildCommonProtocolModel;
- (void).cxx_destruct;

@end
