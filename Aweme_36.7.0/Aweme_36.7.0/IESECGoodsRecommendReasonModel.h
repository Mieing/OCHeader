@class NSString, IESECURLModel, NSNumber;

@interface IESECGoodsRecommendReasonModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *coverIcon;
@property (copy, nonatomic) NSString *recommendContent;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long reasonType;
@property (copy, nonatomic) NSString *rankID;
@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) unsigned long long rankListStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
