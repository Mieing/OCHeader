@class NSString;

@interface AWEEditMusicCapsuleGetterImpl : ACCUseCase <AWEEditMusicCapsuleGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canInitShow;
- (BOOL)isHdrEnableAtInit;
- (BOOL)isNoteStyleAtInit;

@end
