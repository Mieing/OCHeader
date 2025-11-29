@class NSString, AWEMusicKaraokeAudioModel, NSArray, NSNumber, AWEURLModel;

@interface AWEMusicKaraokeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *karaokeID;
@property (copy, nonatomic) NSString *karaokeIDStr;
@property (retain, nonatomic) NSNumber *musicID;
@property (copy, nonatomic) NSString *musicIDStr;
@property (retain, nonatomic) NSNumber *userCount;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) AWEURLModel *coverHD;
@property (retain, nonatomic) AWEURLModel *coverLarge;
@property (retain, nonatomic) AWEURLModel *coverMedium;
@property (retain, nonatomic) AWEURLModel *coverThumb;
@property (retain, nonatomic) AWEMusicKaraokeAudioModel *originalSoundAudio;
@property (retain, nonatomic) AWEMusicKaraokeAudioModel *accompanimentAudio;
@property (retain, nonatomic) AWEURLModel *midiURL;
@property (nonatomic) long long duration;
@property (nonatomic) long long lyricsType;
@property (retain, nonatomic) AWEURLModel *lyricsURL;
@property (nonatomic) long long lyricsStart;
@property (nonatomic) BOOL showAuthor;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) BOOL isPGC;
@property (nonatomic) BOOL isFull;
@property (nonatomic) long long MIDISource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)coverHDJSONTransformer;
+ (id)coverLargeJSONTransformer;
+ (id)coverMediumJSONTransformer;
+ (id)coverThumbJSONTransformer;
+ (id)originalSoundAudioJSONTransformer;
+ (id)accompanimentAudioJSONTransformer;
+ (id)lyricsURLJSONTransformer;
+ (id)midiURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
