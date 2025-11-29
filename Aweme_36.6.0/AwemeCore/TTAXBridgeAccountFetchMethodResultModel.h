@class NSNumber, NSDictionary, NSString;

@interface TTAXBridgeAccountFetchMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSDictionary *response;
@property (copy, nonatomic) NSString *logId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
