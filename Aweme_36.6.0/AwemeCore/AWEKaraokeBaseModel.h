@class NSString, AWEKaraokeAudioModel, AWENewURLModel, NSArray, NSNumber;

@interface AWEKaraokeBaseModel : AWEBaseDataModel

@property (retain, nonatomic) NSNumber *karaokeID;
@property (copy, nonatomic) NSString *karaokeIDStr;
@property (retain, nonatomic) NSNumber *musicID;
@property (copy, nonatomic) NSString *musicIDStr;
@property (retain, nonatomic) NSNumber *userCount;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) AWENewURLModel *coverHD;
@property (retain, nonatomic) AWENewURLModel *coverLarge;
@property (retain, nonatomic) AWENewURLModel *coverMedium;
@property (retain, nonatomic) AWENewURLModel *coverThumb;
@property (retain, nonatomic) AWEKaraokeAudioModel *originalSoundAudio;
@property (retain, nonatomic) AWEKaraokeAudioModel *accompanimentAudio;
@property (nonatomic) int duration;
@property (nonatomic) int lyricType;
@property (retain, nonatomic) AWENewURLModel *lyricsURL;
@property (nonatomic) int lyricStart;
@property (nonatomic) BOOL showAuthor;
@property (copy, nonatomic) NSArray *tags;
@property (retain, nonatomic) AWENewURLModel *midiURL;
@property (nonatomic) BOOL isPGC;
@property (nonatomic) BOOL isFull;
@property (nonatomic) int MIDISource;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
