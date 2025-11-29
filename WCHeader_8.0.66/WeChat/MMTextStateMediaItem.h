@class NSString;

@interface MMTextStateMediaItem : NSObject <WCPlayerMediaExt, PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) float duration;
@property (nonatomic) int createTime;
@property (nonatomic) float preloadDuration;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *videoMD5;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *thumbImageUrl;
@property (nonatomic) int preloadIndex;
@property (nonatomic) BOOL bUseXorEncrypt;
@property (nonatomic) unsigned long long xorEncrpyKey;
@property (nonatomic) unsigned long long enckey;
@property (nonatomic) int encIdx;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) BOOL bIsLivePhoto;
@property (nonatomic) BOOL bIsUseLivePhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
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
+ (void)PBArrayAdd_bIsLivePhoto;
+ (void)PBArrayAdd_bIsUseLivePhoto;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (BOOL)createTempSightPath;
- (BOOL)hasSight;
- (BOOL)hasPreview;
- (BOOL)isValid;
- (BOOL)isVideoMedia;
- (void)cleanMeidaFileCache;
- (void)migrateToTid:(id)a0;
- (id)tempPathForSightData;
- (id)pathForSightData;
- (id)pathForPreview;
- (id)tmpPathForPreview;
- (id)pathForImage;
- (id)tmpPathForImage;
- (id)pathForWxam;
- (id)getImageIdentifier;
- (id)getWxamIdentifier;
- (id)getMediaWrapIdentifier;
- (id)getThumbIdentifier;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getTmpThumbImagePath;
- (id)getThumbImagePath;
- (unsigned int)getPreloadPercent;
- (id)generateDownloadArgsWrap;
- (void).cxx_destruct;

@end
