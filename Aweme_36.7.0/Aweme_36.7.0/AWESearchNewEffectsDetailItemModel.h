@class NSString, NSNumber, AWEURLModel;

@interface AWESearchNewEffectsDetailItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *useCount;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) long long effectType;
@property (nonatomic) long long mvType;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
