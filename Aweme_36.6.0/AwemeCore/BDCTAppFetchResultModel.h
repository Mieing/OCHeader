@class NSString, NSNumber, NSDictionary;

@interface BDCTAppFetchResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *response;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *beginReqNetTime;
@property (retain, nonatomic) NSNumber *error_code;
@property (copy, nonatomic) NSDictionary *header;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
