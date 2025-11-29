@class NSString, WCFinderVideoPlayInfoImagePathArray;

@interface WCFinderVideoPlayInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long playingTimeRecently;
@property (retain, nonatomic) NSString *tempPath;
@property (retain, nonatomic) NSString *mediaPath;
@property (retain, nonatomic) WCFinderVideoPlayInfoImagePathArray *imagePathArray;
@property (nonatomic) double playbackTime;
@property (nonatomic) double maxPlaybackTime;
@property (retain, nonatomic) NSString *contextID;
@property (retain, nonatomic) NSString *feedContentVMAddress;
@property (nonatomic) unsigned long long stopPlayTimestamp;
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
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)playingTimeRecently;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_playingTimeRecently;
+ (const void *)tempPath;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_tempPath;
+ (const void *)mediaPath;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_mediaPath;
+ (const void *)imagePathArray;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_imagePathArray;
+ (const void *)playbackTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_playbackTime;
+ (const void *)contextID;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_contextID;
+ (const void *)maxPlaybackTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_maxPlaybackTime;
+ (const void *)feedContentVMAddress;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_feedContentVMAddress;
+ (const void *)stopPlayTimestamp;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_stopPlayTimestamp;
+ (void)__wcdb_column_constraint_10:(void *)a0;
+ (void)__wcdb_index_11:(void *)a0;

- (long long)getPlayInfoSpace;
- (void).cxx_destruct;

@end
