@class NSString, WCFinderContainerMutableArray;

@interface WCFinderEventInfosModel : NSObject <PBCoding, WCTTableCoding>

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderContainerMutableArray *eventInfosArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_eventInfosArray;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)eventInfosArray;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_eventInfosArray;
+ (void)__wcdb_column_constraint_2:(void *)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
