@class NSNumber, NSString, NSArray;

@interface BDXBridgeImGetChainsLatestDataMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *serverCode;
@property (copy, nonatomic) NSString *serverMessage;
@property (retain, nonatomic) NSArray *chainsInfoList;

+ (id)chainsInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
