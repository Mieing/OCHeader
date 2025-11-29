@class NSString, NSNumber, NSArray;

@interface BDXBridgeTeenLoadDetailFeedsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *reactId;
@property (retain, nonatomic) NSNumber *insertBefore;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *page;
@property (copy, nonatomic) NSString *imprId;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
