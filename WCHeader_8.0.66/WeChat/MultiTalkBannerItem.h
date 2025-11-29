@class NSString;

@interface MultiTalkBannerItem : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *wxGroupId;
@property (retain, nonatomic) NSString *wxMultiTalkGroupId;
@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long roomkey;
@property (nonatomic) unsigned int routeid;
@property (nonatomic) unsigned int createtime;
@property (retain, nonatomic) NSString *wxMultiTalkUserList;
@property (retain, nonatomic) NSString *wxMultiTalkInviteNick;
@property (nonatomic) unsigned int multiTalkStatus;
@property (nonatomic) unsigned long long bannerItemSeq;
@property (nonatomic) unsigned int bannerSDKMode;
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
+ (const void *)wxGroupId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_wxGroupId;
+ (const void *)wxMultiTalkGroupId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_wxMultiTalkGroupId;
+ (const void *)roomid;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_roomid;
+ (const void *)roomkey;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_roomkey;
+ (const void *)routeid;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_routeid;
+ (const void *)createtime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_createtime;
+ (const void *)wxMultiTalkUserList;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_wxMultiTalkUserList;
+ (const void *)wxMultiTalkInviteNick;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_wxMultiTalkInviteNick;
+ (const void *)multiTalkStatus;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_multiTalkStatus;
+ (const void *)bannerItemSeq;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_bannerItemSeq;
+ (const void *)bannerSDKMode;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_bannerSDKMode;
+ (void)__wcdb_column_constraint_11:(void *)a0;

- (BOOL)isBannerItemValid;
- (void).cxx_destruct;

@end
