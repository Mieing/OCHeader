@class NSString, NSURL;

@interface ACCLocalAudioMusicDataConfigModel : NSObject

@property (copy, nonatomic) NSString *musicName;
@property (copy, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSURL *localMusicURL;
@property (retain, nonatomic) NSURL *localMusicCoverURL;
@property (nonatomic) double assetDuration;
@property (nonatomic) BOOL isFromiTunes;

- (void).cxx_destruct;

@end
