@class NSArray, NSMutableArray;

@interface HMDDebugRealConfig : NSObject

@property (nonatomic) double fetchStartTime;
@property (nonatomic) double fetchEndTime;
@property (retain, nonatomic) NSArray *uploadTypeArray;
@property (retain, nonatomic) NSMutableArray *uploadFileTypeArray;
@property (nonatomic) BOOL isNeedWifi;
@property (nonatomic) unsigned long long limitCnt;
@property (retain, nonatomic) NSArray *andConditions;
@property (retain, nonatomic) NSArray *orConditions;

- (void)setupWithParams:(id)a0;
- (BOOL)checkIfAllowedDebugRealUploadWithType:(id)a0;
- (void)defaultInitialize;
- (BOOL)checkIfNetworkAllowedDebugRealUpload;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
