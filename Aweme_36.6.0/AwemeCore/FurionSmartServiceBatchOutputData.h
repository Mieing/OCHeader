@class FurionSmartServiceInputData, FurionSmartServiceOutputData;

@interface FurionSmartServiceBatchOutputData : NSObject

@property (retain, nonatomic) FurionSmartServiceInputData *inputData;
@property (retain, nonatomic) FurionSmartServiceOutputData *outputData;

- (void).cxx_destruct;

@end
