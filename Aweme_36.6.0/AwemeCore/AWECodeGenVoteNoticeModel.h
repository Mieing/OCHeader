@class NSArray, NSString, AWECodeGenRelationDynamicLableModel, AWECodeGenUrlModel, AWECodeGenAwemeModel;

@interface AWECodeGenVoteNoticeModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *fromUserModelArray;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *optionText;
@property (nonatomic) int mergeCount;
@property (nonatomic) long long refType;
@property (copy, nonatomic) NSString *forwardId;
@property (retain, nonatomic) AWECodeGenRelationDynamicLableModel *relationLabelModel;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (nonatomic) long long optionId;
@property (copy, nonatomic) NSArray *labelListModelArray;
@property (copy, nonatomic) NSString *labelTracking;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
