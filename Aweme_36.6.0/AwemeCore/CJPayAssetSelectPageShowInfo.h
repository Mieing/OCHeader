@class NSString, NSDictionary;

@interface CJPayAssetSelectPageShowInfo : JSONModel

@property (copy, nonatomic) NSString *selectPagePriorityTitle;
@property (copy, nonatomic) NSString *selectPagePriorityIcon;
@property (copy, nonatomic) NSString *selectPagePrioritySubTitle;
@property (copy, nonatomic) NSString *selectPageGuideText;
@property (copy, nonatomic) NSString *selectPageGuideChoiceText;
@property (copy, nonatomic) NSString *selectPageSelectType;
@property (copy, nonatomic) NSDictionary *selectPageSceneTitleMap;
@property (copy, nonatomic) NSDictionary *selectPageSceneSubTitleMap;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
