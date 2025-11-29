@class NSSet;

@interface AWEIMIncentiveChatCircleGroupConfig : NSObject

@property (nonatomic) BOOL enableCheckGroupOnSettingAndScanDB;
@property (copy, nonatomic) NSSet *groupOnSet;
@property (copy, nonatomic) NSSet *groupOffSet;
@property (nonatomic) BOOL enableCheckGroupCategory;
@property (nonatomic) BOOL enableQueryDb;
@property (nonatomic) BOOL enableUpdateToServerAfterExtChange;
@property (nonatomic) BOOL enableUpdateToServerAfterMergeDataFinish;
@property (nonatomic) BOOL enableUpdateToServer;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long queryDbIntervalHour;
@property (nonatomic) long long uploadGroupIntervalHour;
@property (nonatomic) long long scanDbPageSize;
@property (nonatomic) double scanDBAppendTimeInterval;

+ (id)getAWEIMIncentiveChatCircleGroupConfig;

- (void).cxx_destruct;

@end
