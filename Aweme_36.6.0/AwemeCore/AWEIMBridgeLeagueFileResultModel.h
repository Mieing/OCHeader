@class NSNumber, NSString;

@interface AWEIMBridgeLeagueFileResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *resourceStatus;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
