@class MMMusicInfo, NSString, NSData;

@interface MusicHistoryItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSData *musicInfoData;
@property (nonatomic) double updateTimeStamp;
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
+ (const void *)itemId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_itemId;
+ (const void *)musicInfoData;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_musicInfoData;
+ (const void *)updateTimeStamp;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_updateTimeStamp;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;
+ (id)generateItemIdFromMusicInfo:(id)a0;

- (id)initWithMusicInfo:(id)a0;
- (void).cxx_destruct;

@end
