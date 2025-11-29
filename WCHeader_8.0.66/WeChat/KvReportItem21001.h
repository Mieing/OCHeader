@class NSString;

@interface KvReportItem21001 : KvReportBaseItem

@property (nonatomic) unsigned int BizUin_21;
@property (copy, nonatomic) NSString *Vid_22;
@property (nonatomic) unsigned int MsgId_23;
@property (nonatomic) unsigned int Idx_24;
@property (nonatomic) unsigned int AbsolutePosition_25;
@property (copy, nonatomic) NSString *Sessionid_26;
@property (copy, nonatomic) NSString *AutoPlayId_27;
@property (nonatomic) unsigned int EventType_28;
@property (nonatomic) unsigned long long PlayDuration_29;
@property (nonatomic) unsigned long long VideoDuration_30;
@property (nonatomic) unsigned long long BuffDuration_31;
@property (nonatomic) unsigned int NetworkType_32;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
