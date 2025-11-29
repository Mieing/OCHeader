@class NSArray, NSNumber, AWEIMServiceMsgInputStyleInfo;

@interface AWEIMServiceMsgContainerFeatureConfigModel : AWEBaseApiModel

@property (readonly, nonatomic) NSArray *notShowItemList;
@property (readonly, nonatomic) NSNumber *inputStyle;
@property (readonly, nonatomic) NSArray *showItemList;
@property (readonly, nonatomic) AWEIMServiceMsgInputStyleInfo *inputStyleInfo;

+ (id)generateFromDict:(id)a0;
+ (id)inputStyleInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
