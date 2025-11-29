@class NSNumber, NSString, NSDictionary;

@interface AWEFCoinBridgeOpenByteCertMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSDictionary *extData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
