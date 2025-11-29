@class NSString, IESLiveKtvAtmosphereVideoInfo, IESLiveKTVMVInfo;

@interface HTSLiveKtvAtmosphereVideoContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long songId;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoInfo *videoInfo;
@property (nonatomic) BOOL hasVideoInfo;
@property (retain, nonatomic) IESLiveKTVMVInfo *mvInfo;
@property (nonatomic) BOOL hasMvInfo;
@property (nonatomic) long long kSongUid;

+ (id)descriptor;

@end
