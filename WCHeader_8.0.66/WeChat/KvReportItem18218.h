@class NSString;

@interface KvReportItem18218 : KvReportBaseItem

@property (nonatomic) unsigned int ExposeTime_21;
@property (copy, nonatomic) NSString *BizUserName_22;
@property (nonatomic) long long Mid_23;
@property (nonatomic) BOOL FirstTimeExpose_24;
@property (nonatomic) unsigned int ExposePos_25;
@property (copy, nonatomic) NSString *Desc_26;
@property (nonatomic) unsigned int UnreadCount_27;
@property (nonatomic) unsigned int ExposeStatus_28;
@property (nonatomic) unsigned long long ExposeSessionId_29;
@property (nonatomic) unsigned long long ExposeTimeMs_30;
@property (nonatomic) unsigned int Reason_31;
@property (nonatomic) unsigned int MsgType_32;
@property (nonatomic) BOOL IsRedDot_33;
@property (copy, nonatomic) NSString *StrategyInfo_34;
@property (copy, nonatomic) NSString *DigestBoldInfo_35;
@property (nonatomic) long long CardType_36;
@property (nonatomic) long long Style_37;
@property (nonatomic) unsigned int Idx_38;
@property (copy, nonatomic) NSString *RecInfo_39;
@property (copy, nonatomic) NSString *ExtraData_40;
@property (copy, nonatomic) NSString *LastRecCardId_41;
@property (copy, nonatomic) NSString *finderFeedExportId_42;
@property (copy, nonatomic) NSString *rankSessionId_43;
@property (nonatomic) unsigned int unreadCountType_44;
@property (nonatomic) unsigned int renderMode_45;
@property (nonatomic) unsigned int dataMode_46;
@property (copy, nonatomic) NSString *ReddotReportInfo_48;
@property (copy, nonatomic) NSString *reddotWording_49;
@property (nonatomic) unsigned int reddotNotifyOptions_50;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
