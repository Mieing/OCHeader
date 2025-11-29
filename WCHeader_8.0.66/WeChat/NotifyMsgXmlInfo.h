@class NSString;

@interface NotifyMsgXmlInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *tipsID;
@property (nonatomic) unsigned long long feedID;
@property (nonatomic) unsigned long long liveID;
@property (nonatomic) long long msgSvrID;
@property (nonatomic) BOOL bHadRead;
@property (nonatomic) BOOL bLiveEnd;
@property (nonatomic) unsigned int ctrlType;
@property (nonatomic) unsigned int deliveryTime;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *byPassInfo;
@property (retain, nonatomic) NSString *noticeID;
@property (nonatomic) BOOL bMainFrameExposed;
@property (nonatomic) BOOL bMainFrameClicked;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tipsID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tipsID;
+ (const void *)feedID;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_feedID;
+ (const void *)liveID;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_liveID;
+ (const void *)msgSvrID;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_msgSvrID;
+ (const void *)bHadRead;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_bHadRead;
+ (const void *)bLiveEnd;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_bLiveEnd;
+ (const void *)ctrlType;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_ctrlType;
+ (const void *)deliveryTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_deliveryTime;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_createTime;
+ (const void *)byPassInfo;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_byPassInfo;
+ (const void *)noticeID;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_noticeID;
+ (const void *)bMainFrameExposed;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_bMainFrameExposed;
+ (const void *)bMainFrameClicked;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_bMainFrameClicked;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_index_14:(void *)a0;

- (id)initWithNotifyItem:(id)a0 msgWrap:(id)a1;
- (void).cxx_destruct;

@end
