@class NSNumber, NSString;

@interface BDXBridgeLifeEnableSmartAlbumsMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
