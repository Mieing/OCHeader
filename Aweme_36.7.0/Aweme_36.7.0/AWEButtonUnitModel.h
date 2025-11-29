@class AWEButtonIconInfoModel, AWEButtonTextInfoModel, AWEButtonClickActionInfoModel, NSArray, NSString, AWEButtonContainerStyleModel;

@interface AWEButtonUnitModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEButtonTextInfoModel *content;
@property (retain, nonatomic) AWEButtonIconInfoModel *icon;
@property (nonatomic) long long position;
@property (retain, nonatomic) AWEButtonClickActionInfoModel *clickAction;
@property (retain, nonatomic) AWEButtonContainerStyleModel *containerStyle;
@property (nonatomic) long long exitType;
@property (copy, nonatomic) NSArray *btnDataKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)contentJSONTransformer;
+ (id)clickActionJSONTransformer;
+ (id)containerStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
