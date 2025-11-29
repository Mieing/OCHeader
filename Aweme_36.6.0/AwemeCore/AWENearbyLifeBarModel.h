@class NSString, AWEURLModel;

@interface AWENearbyLifeBarModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *distanceMinM;
@property (copy, nonatomic) NSString *l1Name;
@property (copy, nonatomic) NSString *l2Name;
@property (copy, nonatomic) NSString *l3Name;

+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
