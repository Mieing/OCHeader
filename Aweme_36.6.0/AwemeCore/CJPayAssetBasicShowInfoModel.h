@class NSString, NSDictionary, NSArray;
@protocol CJPayUIComponentTextModel;

@interface CJPayAssetBasicShowInfoModel : JSONModel

@property (nonatomic) long long index;
@property (nonatomic) BOOL isChoose;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *descTitle;
@property (copy, nonatomic) NSString *subDescTitle;
@property (copy, nonatomic) NSString *subTitleColor;
@property (copy, nonatomic) NSString *stableStatus;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *primaryCategory;
@property (copy, nonatomic) NSDictionary *sceneTitleMap;
@property (copy, nonatomic) NSDictionary *sceneSubTitleMap;
@property (copy, nonatomic) NSString *partitionAssetTitle;
@property (copy, nonatomic) NSArray<CJPayUIComponentTextModel> *overAllSubTitle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
