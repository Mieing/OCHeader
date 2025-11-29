@class NSArray, FurionSmartServiceInputData;

@interface FurionSmartServiceRunBatchConfig : NSObject

@property (nonatomic) BOOL async;
@property (retain, nonatomic) NSArray *batchInputDatas;
@property (retain, nonatomic) FurionSmartServiceInputData *commonInputData;

- (void).cxx_destruct;
- (id)init;

@end
