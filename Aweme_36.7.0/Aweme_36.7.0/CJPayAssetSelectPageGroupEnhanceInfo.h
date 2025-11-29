@class NSString, CJPayAssetJumpInfoModel;

@interface CJPayAssetSelectPageGroupEnhanceInfo : JSONModel

@property (copy, nonatomic) NSString *enhanceType;
@property (copy, nonatomic) NSString *enhanceIcon;
@property (copy, nonatomic) NSString *enhanceTitleIcon;
@property (copy, nonatomic) NSString *enhanceBgColorGradientAngle;
@property (copy, nonatomic) NSString *enhanceBgColorStart;
@property (copy, nonatomic) NSString *enhanceBgColorEnd;
@property (retain, nonatomic) CJPayAssetJumpInfoModel *enhanceJumpInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
