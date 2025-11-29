@class NSString;

@interface WCRealTimeKVReportWrap : MMObject

@property (nonatomic) unsigned int logId;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL needRealTime;
@property (retain, nonatomic) NSString *extKey;
@property (nonatomic) BOOL reportSuccess;
@property (nonatomic) BOOL tryReportFail;

- (void).cxx_destruct;

@end
