@class NSString, WCMegaVideo, WCFinderMegaVideoAttach, WCFinderContact;

@interface WCFinderMegaVideo : NSObject <WCTTableCoding, PBCoding>

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *videoNonceId;
@property (retain, nonatomic) WCMegaVideo *video;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long cacheTime;
@property (retain, nonatomic) WCFinderMegaVideoAttach *attach;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_videoNonceId;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_username;
+ (const void *)video;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_video;
+ (const void *)videoNonceId;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_videoNonceId;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;

- (id)getPBPropertyTable;
- (id)initWithFinderMegaVideo:(id)a0;
- (id)userName;
- (id)shortVideoId;
- (id)shortNonceId;
- (BOOL)isMine;
- (id)headURLString;
- (id)nickName;
- (void).cxx_destruct;

@end
