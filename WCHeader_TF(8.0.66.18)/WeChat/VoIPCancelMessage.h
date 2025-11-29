@class NSString;

@interface VoIPCancelMessage : NSObject <WCTTableCoding>

@property (nonatomic) unsigned long long m_iVoipRoomid;
@property (nonatomic) BOOL m_bFromNewSync;
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
+ (const void *)m_iVoipRoomid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_iVoipRoomid;
+ (const void *)m_bFromNewSync;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_bFromNewSync;
+ (void)__wcdb_column_constraint_2:(void *)a0;


@end
