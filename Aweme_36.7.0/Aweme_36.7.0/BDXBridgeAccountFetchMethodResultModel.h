@class NSString;

@interface BDXBridgeAccountFetchMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *logId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
