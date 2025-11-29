@class NSString;

@interface WCPlayerVideoMetadata : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double duration;
@property (nonatomic) int level;
@property (nonatomic) int profile;
@property (retain, nonatomic) NSString *profileName;
@property (nonatomic) int colorSpace;
@property (nonatomic) int codecId;
@property (nonatomic) int colorPrimaries;
@property (retain, nonatomic) NSString *videoCodecID;
@property (retain, nonatomic) NSString *videoCodecTag;
@property (nonatomic) long long videoBitRate;
@property (retain, nonatomic) NSString *audioCodecID;
@property (retain, nonatomic) NSString *audioCodecTag;
@property (nonatomic) long long audioBitRate;
@property (nonatomic) int audioSampleRate;
@property (nonatomic) int audioChannels;
@property (nonatomic) int audioFormat;

- (id)description;
- (void).cxx_destruct;

@end
