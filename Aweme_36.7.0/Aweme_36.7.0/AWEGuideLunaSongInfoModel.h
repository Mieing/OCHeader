@class NSArray, AWEGuideLunaPopViewRequestLyricInfo, AWEGuideLunaPopViewRequestSongInfo, AWEGuideLunaPopViewBubbleInfo;

@interface AWEGuideLunaSongInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *songs;
@property (retain, nonatomic) AWEGuideLunaPopViewRequestSongInfo *songInfo;
@property (retain, nonatomic) AWEGuideLunaPopViewRequestLyricInfo *lyricInfo;
@property (nonatomic) unsigned long long songStrategy;
@property (retain, nonatomic) NSArray *comments;
@property (retain, nonatomic) AWEGuideLunaPopViewBubbleInfo *bubbleInfo;

+ (id)commentsJSONTransformer;
+ (id)songsJSONTransformer;
+ (id)songInfoJSONTransformer;
+ (id)lyricInfoJSONTransformer;
+ (id)bubbleInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
