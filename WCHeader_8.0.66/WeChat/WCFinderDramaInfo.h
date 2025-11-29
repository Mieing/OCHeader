@class NSString, FinderDramaInfo;

@interface WCFinderDramaInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *dramaIDKey;
@property (retain, nonatomic) FinderDramaInfo *dramaInfo;
@property (nonatomic) BOOL purchased;
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
+ (const void *)dramaIDKey;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_dramaIDKey;
+ (const void *)dramaInfo;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_dramaInfo;
+ (const void *)purchased;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_purchased;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;
+ (id)finderDramaFromDrama:(id)a0 purchased:(BOOL)a1;

- (void).cxx_destruct;

@end
