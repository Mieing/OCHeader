@class NSString, WCFinderMegaVideoBulletCommentMutableArray;

@interface WCFinderMegaVideoBulletComment : NSObject <WCTTableCoding, PBCoding>

@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long cacheTime;
@property (retain, nonatomic) WCFinderMegaVideoBulletCommentMutableArray *comments;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_comments;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)videoId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_videoId;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)comments;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_comments;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;

- (id)getPBPropertyTable;
- (id)initWithVideoId:(id)a0 commentList:(id)a1;
- (void).cxx_destruct;

@end
