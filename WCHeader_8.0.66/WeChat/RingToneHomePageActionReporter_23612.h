@class NSString;

@interface RingToneHomePageActionReporter_23612 : KvReportBaseItem

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) unsigned long long feedType;
@property (copy, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned long long usageRange;
@property (nonatomic) unsigned long long valid;
@property (nonatomic) unsigned long long vibrateType;

- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)report:(unsigned long long)a0 withRing:(id)a1;
- (void).cxx_destruct;

@end
