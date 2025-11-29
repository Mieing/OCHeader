@class NSArray, NSString;

@interface AWEKaraokeEditModel : MTLModel <ACCKaraokeEditModelProtocol>

@property (copy, nonatomic) NSArray *originalSongTimeList;
@property (copy, nonatomic) NSArray *accompanyTimeList;
@property (copy, nonatomic) NSString *preloadVideoBGID;
@property (nonatomic) double vocalVolume;
@property (nonatomic) double bgmVolume;
@property (nonatomic) double vocalAlign;
@property (nonatomic) BOOL useRecommendVolume;
@property (nonatomic) BOOL useOriginalSong;
@property (nonatomic) BOOL useAudioTuning;
@property (nonatomic) unsigned long long accompanyIndex;
@property (nonatomic) unsigned long long originalSongIndex;
@property (nonatomic) unsigned long long audioTuningIndex;
@property (copy, nonatomic) NSString *lyricStyleId;
@property (copy, nonatomic) NSString *lyricInfoStyleId;
@property (copy, nonatomic) NSString *lyricFontId;
@property (copy, nonatomic) NSString *soundEffectId;
@property (copy, nonatomic) NSString *audioBGVideoId;
@property (copy, nonatomic) NSArray *audioBGImages;
@property (copy, nonatomic) NSString *audioBGImagesPickerId;
@property (copy, nonatomic) NSArray *audioBGAssetModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)reset;

@end
