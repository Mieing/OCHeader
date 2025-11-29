@class ACCMusicTrimViewSnapShootModel;

@interface AWEAudioClipCancelResultModel : NSObject

@property (nonatomic) struct _HTSAudioRange { double location; double length; } range;
@property (nonatomic) long long changeType;
@property (nonatomic) BOOL initialMusicLoopStatus;
@property (nonatomic) long long initialRepeatCount;
@property (nonatomic) BOOL initialUseOriginMusicStatus;
@property (nonatomic) BOOL initialUseSuggestStatus;
@property (retain, nonatomic) ACCMusicTrimViewSnapShootModel *initialImageMusicTrimStatusModel;

- (void).cxx_destruct;

@end
