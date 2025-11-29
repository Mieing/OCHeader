@class NSString;

@interface CJPayUnifyOptionShowInfoExtInfoModel : JSONModel

@property (copy, nonatomic) NSString *subTitlePromo;
@property (copy, nonatomic) NSString *sceneTitle;
@property (copy, nonatomic) NSString *selectPageSceneTitle;
@property (copy, nonatomic) NSString *sceneSubTitle;
@property (copy, nonatomic) NSString *selectPageSceneSubTitle;
@property (copy, nonatomic) NSString *descTitle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
