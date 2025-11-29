@class NSString;

@interface MMFinderLiveKTVSongInfo : NSObject

@property (retain, nonatomic) NSString *accompanyMusicFilePath;
@property (retain, nonatomic) NSString *originalMusicFilePath;
@property (retain, nonatomic) NSString *testSingPCMPath;

- (BOOL)checkResourceValid:(long long)a0;
- (BOOL)hasOriginalMusicFile;
- (void).cxx_destruct;

@end
