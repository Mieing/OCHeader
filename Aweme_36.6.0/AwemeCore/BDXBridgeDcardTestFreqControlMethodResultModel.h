@class NSString;

@interface BDXBridgeDcardTestFreqControlMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL shouldBeControlled;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
