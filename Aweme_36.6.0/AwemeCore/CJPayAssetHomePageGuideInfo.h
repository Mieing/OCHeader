@class NSString, CJPayAssetJumpInfoModel;

@interface CJPayAssetHomePageGuideInfo : JSONModel

@property (copy, nonatomic) NSString *homePageGuideText;
@property (nonatomic) BOOL isHomePageRedDot;
@property (retain, nonatomic) CJPayAssetJumpInfoModel *homePageGuideJumpInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
