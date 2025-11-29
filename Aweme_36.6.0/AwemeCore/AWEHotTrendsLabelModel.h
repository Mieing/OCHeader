@class NSNumber, NSString, AWEURLModel;

@interface AWEHotTrendsLabelModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *hotId;
@property (retain, nonatomic) AWEURLModel *leftIcon;
@property (retain, nonatomic) AWEURLModel *rightIcon;
@property (copy, nonatomic) NSString *bgLeftTopColor;
@property (copy, nonatomic) NSString *bgRightBottomColor;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftIconJSONTransformer;
+ (id)rightIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
