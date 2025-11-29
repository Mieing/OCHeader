@class NSArray, NSNumber;

@interface BDXBridgeDeleteHistoryMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSArray *historyArray;
@property (copy, nonatomic) NSArray *crossHistoryData;
@property (retain, nonatomic) NSNumber *crossHistoryDataSize;
@property (retain, nonatomic) NSNumber *historyArraySize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
