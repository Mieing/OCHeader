@class NSArray, IESLiveKtvSongStruct, IESLiveMultiKTVAudioStageViewUser;

@interface IESLiveKTVSingerModel : NSObject

@property (retain, nonatomic) NSArray *avatarURLList;
@property (retain, nonatomic) IESLiveMultiKTVAudioStageViewUser *user;
@property (retain, nonatomic) IESLiveKtvSongStruct *musicModel;
@property (nonatomic) long long hotCount;
@property (nonatomic) BOOL isSinger;

- (void).cxx_destruct;

@end
