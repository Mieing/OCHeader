@class NSString;

@interface RingBackPlaySoundReporter_23653 : KvReportBaseItem

@property (nonatomic) unsigned int startPlayTimeStamp;
@property (nonatomic) unsigned long long entryType;
@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long roomkey;
@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) unsigned long long feedType;
@property (nonatomic) unsigned long long usageRange;
@property (copy, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned long long logButtonState;
@property (nonatomic) unsigned int playDuration;
@property (nonatomic) unsigned long long muteType;

- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)configueWithRing:(id)a0;
- (void)recordStartPlayRing;
- (void)doReport;
- (void).cxx_destruct;

@end
