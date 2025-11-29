@class NSString, NSNumber;

@interface BDXBridgeTeenOpenAwemeDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *speciesId;
@property (retain, nonatomic) NSNumber *currentIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
