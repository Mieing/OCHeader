@class FurionCostRecord, NSMutableDictionary;

@interface FurionSmartServiceMonitorRunDataItem : NSObject

@property (retain, nonatomic) FurionCostRecord *costRunTotal;
@property (retain, nonatomic) FurionCostRecord *costRunData;
@property (nonatomic) long long runRetCode;
@property (nonatomic) long long runSdkRetCode;
@property (retain, nonatomic) NSMutableDictionary *runExtData;

- (void).cxx_destruct;
- (id)init;

@end
