@class NSString, NSArray, AWECodeGenUrlModel, NSDictionary;

@interface AWECodeGenRelationDynamicLableModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *labelInfo;
@property (nonatomic) int count;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *tabLabelInfo;
@property (nonatomic) long long showType;
@property (copy, nonatomic) NSString *labelInfoColor;
@property (copy, nonatomic) NSString *labelInfoBackgroundColor;
@property (copy, nonatomic) NSString *tabLabelInfoColor;
@property (copy, nonatomic) NSString *tabLabelInfoBackgroundColor;
@property (retain, nonatomic) AWECodeGenUrlModel *labelInfoBackgroundImgModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *labelInfoBackgroundImgStretchPosition;
@property (nonatomic) long long commentId;
@property (copy, nonatomic) NSString *labelTag;
@property (copy, nonatomic) NSString *labelType;
@property (copy, nonatomic) NSArray *userArray;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *comment;
@property (copy, nonatomic) NSDictionary *icon;
@property (copy, nonatomic) NSDictionary *iconList;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) long long tagId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
