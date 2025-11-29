@class NSArray, NSString, NSDictionary;

@interface CJPayAssetJumpInfoModel : JSONModel

@property (copy, nonatomic) NSArray *showInfoArray;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *param;
@property (copy, nonatomic) NSDictionary *extMap;
@property (copy, nonatomic) NSString *icon;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
