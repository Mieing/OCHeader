@class NSString;

@interface AWEMusicStreamingABTestingRegister : HTSService <AWEMusicStreamingABTestingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)playlistEnabled;
+ (long long)dspApiScene;
+ (BOOL)isPlaylistAnchorPopupAdapte;


@end
