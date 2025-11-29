@class NSString, NSArray;

@interface IESECGoodsDetailAuthorReputationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) float score;
@property (nonatomic) unsigned long long level;
@property (copy, nonatomic) NSString *sales;
@property (copy, nonatomic) NSString *percent;
@property (copy, nonatomic) NSArray *salesNum;
@property (copy, nonatomic) NSString *scoreNormalText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
