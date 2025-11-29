@class NSString, FinderTabTipsDSLRenderTmpl, WCFinderContact;

@interface WCFinderMembershipContact : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long memberStatus;
@property (nonatomic) unsigned long long expireTime;
@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl *dslRender;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)contact;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_contact;
+ (const void *)memberStatus;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_memberStatus;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_expireTime;
+ (const void *)pageType;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_pageType;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;

- (id)initWithFinderMemberCard:(id)a0;
- (id)initWithFinderMemberFans:(id)a0;
- (void).cxx_destruct;

@end
