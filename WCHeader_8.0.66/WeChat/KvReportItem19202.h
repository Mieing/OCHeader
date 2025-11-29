@class NSString;

@interface KvReportItem19202 : KvReportBaseItem

@property (retain, nonatomic) NSString *Username_21;
@property (nonatomic) unsigned int MsgType_22;
@property (retain, nonatomic) NSString *MsgUrl_23;
@property (nonatomic) unsigned int OptType_24;
@property (nonatomic) unsigned int Position_25;
@property (nonatomic) unsigned long long SendTime_26;
@property (nonatomic) unsigned long long EnterTime_27;
@property (nonatomic) unsigned int SendType_28;
@property (nonatomic) unsigned long long svrMsgId_29;
@property (nonatomic) long long scene_30;
@property (retain, nonatomic) NSString *sessionId_31;
@property (nonatomic) unsigned int bizuin_32;
@property (nonatomic) unsigned int msgid_33;
@property (nonatomic) unsigned int idx_34;
@property (nonatomic) unsigned long long exitTime_35;
@property (nonatomic) unsigned int downMsgScene_36;
@property (nonatomic) unsigned int upMsgType_37;
@property (nonatomic) unsigned int upMsgSubType_38;
@property (nonatomic) long long menuid_39;
@property (nonatomic) unsigned int addContactScene_40;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
