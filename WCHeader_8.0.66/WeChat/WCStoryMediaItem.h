@class NSString;

@interface WCStoryMediaItem : NSObject <WCPlayerMediaExt, PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *mid;
@property (nonatomic) float duration;
@property (nonatomic) int createTime;
@property (nonatomic) float preloadDuration;
@property (nonatomic) BOOL notPostSucc;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *videoMD5;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *thumbImageUrl;
@property (nonatomic) int preloadIndex;
@property (nonatomic) BOOL bUseXorEncrypt;
@property (nonatomic) unsigned long long xorEncrpyKey;
@property (nonatomic) unsigned long long enckey;
@property (nonatomic) int encIdx;
@property (retain, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_videoMD5;
+ (void)PBArrayAdd_thumbImageUrl;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_bUseXorEncrypt;
+ (void)PBArrayAdd_xorEncrpyKey;
+ (void)PBArrayAdd_enckey;
+ (void)PBArrayAdd_encIdx;
+ (void)PBArrayAdd_token;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (BOOL)createTempSightPath;
- (BOOL)hasData;
- (BOOL)hasSight;
- (BOOL)hasPreview;
- (BOOL)isValid;
- (void)cleanMeidaFileCache;
- (BOOL)saveDataFromPath:(id)a0;
- (BOOL)saveSightDataFromPath:(id)a0;
- (BOOL)savePreviewFromPath:(id)a0;
- (BOOL)saveDataFromData:(id)a0;
- (BOOL)saveSightDataFromData:(id)a0;
- (BOOL)savePreviewFromData:(id)a0;
- (id)getMediaDataPath;
- (id)tempPathForSightData;
- (id)pathForSightData;
- (id)pathForPreview;
- (id)tmpPathForPreview;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getThumbIdentifier;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getTmpThumbImagePath;
- (id)getThumbImagePath;
- (id)generateDownloadArgsWrap;
- (unsigned int)getPreloadPercent;
- (void).cxx_destruct;

@end
