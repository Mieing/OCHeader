@class NSString;

@interface KvReportItem21461 : KvReportBaseItem

@property (copy, nonatomic) NSString *BizUin_21;
@property (nonatomic) unsigned int Mid_22;
@property (nonatomic) unsigned int Idx_23;
@property (nonatomic) int ItemShowType_24;
@property (copy, nonatomic) NSString *ExpType_25;
@property (copy, nonatomic) NSString *CardId_26;
@property (nonatomic) unsigned int RecOrder_27;
@property (nonatomic) unsigned long long RecId_28;
@property (copy, nonatomic) NSString *RecSummary_29;
@property (nonatomic) unsigned int Style_30;
@property (copy, nonatomic) NSString *RecInfo_31;
@property (nonatomic) int Weight_32;
@property (nonatomic) unsigned int RedDotFlag_33;
@property (nonatomic) BOOL UseServerTime_34;
@property (nonatomic) int Pos_35;
@property (nonatomic) int InsertRet_36;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
