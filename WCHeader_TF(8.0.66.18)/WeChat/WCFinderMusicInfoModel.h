@class NSString;

@interface WCFinderMusicInfoModel : NSObject <PBCoding>

@property (copy, nonatomic) NSString *docId;
@property (copy, nonatomic) NSString *albumThumbUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *mediaStreamingUrl;
@property (nonatomic) unsigned int chorusBegin;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *miniappInfo;
@property (copy, nonatomic) NSString *floatThumbUrl;
@property (nonatomic) unsigned int docType;
@property (copy, nonatomic) NSString *songId;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_docId;
+ (void)PBArrayAdd_albumThumbUrl;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_artist;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_mediaStreamingUrl;
+ (void)PBArrayAdd_chorusBegin;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_miniappInfo;
+ (void)PBArrayAdd_floatThumbUrl;
+ (void)PBArrayAdd_docType;
+ (void)PBArrayAdd_songId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithFinderMusicInfo:(id)a0;
- (id)initWithRecommendMusicInfo:(id)a0;
- (id)genMusicInfo;
- (id)genRecommendedMusicInfo;
- (id)genMMMusicInfo;
- (void).cxx_destruct;

@end
