@class NSNumber, NSString;

@interface BDXBridgeGetGeckoInfoMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL needUpdate;
@property (retain, nonatomic) NSNumber *totalSize;
@property (copy, nonatomic) NSString *version;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
