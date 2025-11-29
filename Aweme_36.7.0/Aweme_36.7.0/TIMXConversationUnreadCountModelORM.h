@class NSString;

@interface TIMXConversationUnreadCountModelORM : NSObject <WCTTableCoding, TIMXConversationUnreadCountModelProtocol>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) int badgeCount;
@property (nonatomic) int readBadgeCount;
@property (nonatomic) int type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)readBadgeCount;
+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)ss_type;
+ (id)swift_ss_type;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)ss_conversationID;
+ (id)swift_ss_conversationID;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;
+ (const void *)ss_badgeCount;
+ (id)swift_ss_badgeCount;
+ (const void *)ss_readBadgeCount;
+ (id)swift_ss_readBadgeCount;
+ (void)__wcdb_index_11:(void *)a0;
+ (const void *)conversationID;
+ (const void *)type;
+ (const void *)allProperties;
+ (const void *)badgeCount;

- (void).cxx_destruct;

@end
