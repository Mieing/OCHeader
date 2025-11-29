@class RACSignal, NSString, RACSubject;

@interface AWEStoryCameraEditMusicCropViewModel : ACCEditViewModel <ACCVideoFriendsEditCropService>

@property (retain, nonatomic) RACSubject *didCancelMusicAICropSubject;
@property (readonly, nonatomic) RACSignal *didCancelMusicAICropSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendDidCancelMusicAICropSignal;
- (void).cxx_destruct;
- (void)dealloc;

@end
