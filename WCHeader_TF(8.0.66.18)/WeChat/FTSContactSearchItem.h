@class NSString;

@interface FTSContactSearchItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *reservedText1;
@property (retain, nonatomic) NSString *reservedText2;
@property (nonatomic) unsigned long long contactType;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *mainSearchContent;
@property (retain, nonatomic) NSString *groupMembers;
@property (retain, nonatomic) NSString *associatedGroups;
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
+ (const void *)mainSearchContent;
+ (const void *)__wcdb_synthesize_83:(void *)a0;
+ (id)swift_mainSearchContent;
+ (const void *)groupMembers;
+ (const void *)__wcdb_synthesize_84:(void *)a0;
+ (id)swift_groupMembers;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_85:(void *)a0;
+ (id)swift_userName;
+ (const void *)contactType;
+ (const void *)__wcdb_synthesize_86:(void *)a0;
+ (id)swift_contactType;
+ (const void *)associatedGroups;
+ (const void *)__wcdb_synthesize_87:(void *)a0;
+ (id)swift_associatedGroups;
+ (const void *)reservedText1;
+ (const void *)__wcdb_synthesize_88:(void *)a0;
+ (id)swift_reservedText1;
+ (const void *)reservedText2;
+ (const void *)__wcdb_synthesize_89:(void *)a0;
+ (id)swift_reservedText2;
+ (void)__wcdb_virtual_table_90:(void *)a0;
+ (void)__wcdb_virtual_table_91:(void *)a0;
+ (void)__wcdb_column_constraint_92:(void *)a0;
+ (void)__wcdb_column_constraint_93:(void *)a0;
+ (void)__wcdb_column_constraint_94:(void *)a0;

- (void).cxx_destruct;

@end
