@class NSString, WCFinderAttachmentListAttachmentsMutableArray;

@interface WCFinderAttachmentList : NSObject <WCTTableCoding, PBCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long cacheTime;
@property (retain, nonatomic) WCFinderAttachmentListAttachmentsMutableArray *attachments;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_attachments;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)attachments;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_attachments;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;

- (id)getPBPropertyTable;
- (id)initWithDataItemTid:(id)a0 finderAttachmentList:(id)a1;
- (id)initWithDataItemTid:(id)a0 attachments:(id)a1;
- (id)genAttachmentList;
- (void)updateLongVideoAttachmentWith:(id)a0;
- (id)getLongVideoAttachment;
- (BOOL)removeLongVideoAttachment;
- (id)getMiniAppShopAttachment;
- (BOOL)clearMiniAppShopAttachment;
- (id)getJumpInfoAttachmentByBusinessType:(int)a0;
- (BOOL)clearJumpInfoAttachmentByBusinessType:(int)a0;
- (id)getJumpInfoAttachmentByBusinessCategory:(int)a0;
- (BOOL)clearJumpInfoAttachmentByBusinessCategory:(int)a0;
- (id)fetchAttachementWithBusinesssType:(int)a0;
- (BOOL)removeFinderAttachmentWithBusinessType:(int)a0;
- (id)fetchAttachementWithBusinesssCategory:(int)a0;
- (BOOL)removeFinderAttachmentWithBusinessCategory:(int)a0;
- (void).cxx_destruct;

@end
