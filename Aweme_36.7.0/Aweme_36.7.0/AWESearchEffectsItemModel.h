@class NSString, NSNumber, AWEURLModel;

@interface AWESearchEffectsItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSNumber *useCount;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) NSString *effectID;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
