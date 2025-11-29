@class NSString;

@interface RingTonePlaySoundReporter_23613 : KvReportBaseItem

@property (nonatomic) unsigned int startPlayTimeStamp;
@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long roomkey;
@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) unsigned long long feedType;
@property (nonatomic) unsigned long long usageRange;
@property (copy, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned long long entryType;
@property (nonatomic) unsigned long long applicationState;
@property (nonatomic) unsigned long long callKitState;
@property (nonatomic) unsigned int playDuration;
@property (nonatomic) unsigned long long muteType;
@property (nonatomic) unsigned long long vibrateType;

- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)configueWithRing:(id)a0;
- (void)recordStartPlayRing;
- (void)doReport;
- (void)fetchMuteStateThenReport;
- (id)fetchMuteState;
- (void).cxx_destruct;

@end
