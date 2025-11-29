@class NSString, NSMutableArray;

@interface WXGBackupRecoverAnalyseInfo : NSObject

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *briefString;
@property (nonatomic) double costTime;
@property (nonatomic) unsigned long long msgListCount;
@property (nonatomic) unsigned long long mediaCount;
@property (nonatomic) unsigned long long msgListSize;
@property (nonatomic) unsigned long long mediaSize;
@property (nonatomic) unsigned long long filterMediaCount;
@property (nonatomic) unsigned long long filterMediaSize;
@property (nonatomic) unsigned long long requestFilterMediaCount;
@property (nonatomic) unsigned long long requestFilterCount;
@property (nonatomic) double filterCostTime;
@property (nonatomic) unsigned long long minStartTime;
@property (nonatomic) unsigned long long maxEndTime;
@property (retain, nonatomic) NSMutableArray *requestSessionInfo;

- (id)init;
- (id)brief;
- (void).cxx_destruct;

@end
