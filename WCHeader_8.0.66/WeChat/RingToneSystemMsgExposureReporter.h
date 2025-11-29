@class NSString;

@interface RingToneSystemMsgExposureReporter : KvReportBaseItem

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *wording;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *uin;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned int titleType;

- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;
- (void)doReport;
- (void).cxx_destruct;

@end
