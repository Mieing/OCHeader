@class NSString, BDPUniqueID, NSMutableArray;

@interface BDPKryptonTelemetryServiceImpl : NSObject <KryptonTelemetryService> {
    BDPUniqueID *_uniqueID;
    NSMutableArray *_params;
    long long _maxCnt;
    BOOL needReport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
