@class NSString, FaceLiveViewController;

@interface FaceLiveViewControllerAudioAdapter : NSObject <BDCTAudioPlayerDelegate>

@property (weak, nonatomic) FaceLiveViewController *faceLiveVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioPlayUpdating:(id)a0;
- (void)audioPlayerDidFinishPlaying;
- (void).cxx_destruct;

@end
