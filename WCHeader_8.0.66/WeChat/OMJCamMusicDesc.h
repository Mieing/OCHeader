@class NSString, NSArray;

@interface OMJCamMusicDesc : NSObject

@property (nonatomic) BOOL isMusicEnabled;
@property (retain, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSString *musicKey;
@property (retain, nonatomic) NSString *musicName;
@property (retain, nonatomic) NSString *singerNames;
@property (retain, nonatomic) NSString *musicFilePath;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTimeOfMusic;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } durationOfMusic;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTimeOfCamScene;
@property (nonatomic) int loopCount;
@property (retain, nonatomic) NSArray *lyricInfos;

- (id)init;
- (void).cxx_destruct;

@end
