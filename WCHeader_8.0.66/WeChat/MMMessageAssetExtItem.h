@class NSString;

@interface MMMessageAssetExtItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int msgLocalID;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int msgCreateTime;
@property (nonatomic) BOOL didSaveHDToAlbum;
@property (nonatomic) BOOL didSaveMiddleToAlbum;
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
+ (const void *)msgLocalID;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_msgLocalID;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_msgType;
+ (const void *)msgCreateTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_msgCreateTime;
+ (const void *)didSaveHDToAlbum;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_didSaveHDToAlbum;
+ (const void *)didSaveMiddleToAlbum;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_didSaveMiddleToAlbum;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (void)__wcdb_index_10:(void *)a0;
+ (void)__wcdb_index_11:(void *)a0;


@end
