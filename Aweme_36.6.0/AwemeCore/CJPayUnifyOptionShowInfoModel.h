@class NSSet, NSString, CJPayUnifyOptionShowInfoDataModel;

@interface CJPayUnifyOptionShowInfoModel : JSONModel

@property (copy, nonatomic) NSSet *assetOptionTypeList;
@property (copy, nonatomic) NSString *promotionScene;
@property (copy, nonatomic) NSString *optionIndex;
@property (retain, nonatomic) CJPayUnifyOptionShowInfoDataModel *showInfoDataModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;
+ (id)assetCurrentOptionShowInfoModelWithOptionTypeList:(id)a0 showInfoModelList:(id)a1;

- (BOOL)isFindTargetShowInfoDataModel:(id)a0;
- (void).cxx_destruct;

@end
