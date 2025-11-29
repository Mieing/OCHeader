@class NSArray, NSString, AWECodeGenAwemeModel, AWECodeGenRelationDynamicLableModel;

@interface AWECodeGenViewNoticeModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *fromUserModelArray;
@property (nonatomic) int mergeCount;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) AWECodeGenRelationDynamicLableModel *relationLabelModel;
@property (nonatomic) int labelType;
@property (copy, nonatomic) NSString *labelTracking;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
