@class ACCMusicTrimViewSnapShootModel;

@interface AWEAudioClipDoneResultModel : NSObject

@property (nonatomic) struct _HTSAudioRange { double location; double length; } range;
@property (nonatomic) long long changeType;
@property (nonatomic) BOOL enableMusicLoop;
@property (nonatomic) BOOL hasChangeMusicLoop;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL enableUseOriginMusic;
@property (nonatomic) BOOL enableUseSuggest;
@property (retain, nonatomic) ACCMusicTrimViewSnapShootModel *imageMusicTrimStatusModel;
@property (nonatomic) BOOL isMusicRangeEdited;

- (void).cxx_destruct;

@end
