@class NSString;

@interface AWEStudioPlaylistUtilsImpl : NSObject <AWEStudioPlaylistUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)guideToast;
- (void)shouldAddLunaMusicAnchor:(id)a0;
- (BOOL)isPlaylistAnchorOf:(id)a0;
- (id)playlistIdAnchorOf:(id)a0;
- (void)recorderViewControllerViewDidLoad:(id)a0;

@end
