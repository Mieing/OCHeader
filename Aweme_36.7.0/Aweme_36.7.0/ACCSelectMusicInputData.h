@class ACCMusicTrimViewSnapShootModel, NSString, NSDictionary, AWEVideoPublishViewModel;
@protocol ACCMusicModelProtocol, ACCChallengeModelProtocol;

@interface ACCSelectMusicInputData : NSObject <ACCSelectMusicInputDataProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSString *ugcPathRefer;
@property (retain, nonatomic) id<ACCMusicModelProtocol> sameStickerMusic;
@property (retain, nonatomic) id<ACCChallengeModelProtocol> challenge;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL useSuggestClipRange;
@property (nonatomic) BOOL enableMusicLoop;
@property (nonatomic) struct _HTSAudioRange { double location; double length; } audioRange;
@property (nonatomic) double exsitingVideoDuration;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ didClipWithRange;
@property (copy, nonatomic) id /* block */ didSuggestClipRangeChange;
@property (copy, nonatomic) id /* block */ setForbidSimultaneousScrollViewPanGesture;
@property (copy, nonatomic) NSDictionary *clipTrackInfo;
@property (nonatomic) BOOL disableCutMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicSelectInPanel;
@property (nonatomic) BOOL enableUseOriginMusic;
@property (retain, nonatomic) ACCMusicTrimViewSnapShootModel *imageMusicTrimStatusModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
