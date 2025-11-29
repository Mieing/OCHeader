@class NSString;

@interface AWEStoryEditMusicShareStoryViewModel : ACCEditViewModel <ACCVideoFriendsEditMusicShareStoryService>

@property (copy, nonatomic) id /* block */ cropRangeChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMusicCropRange:(struct _HTSAudioRange { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
