@class NSString, HTSLiveRoom;
@protocol AWELiveStreamPlayer;

@interface AWELiveUserAvatarPreviewManager : NSObject <IESLivePlayerControllerDelegate, AWEUserMessage, AWELiveUserAvatarPreviewProtocol>

@property (copy, nonatomic) id /* block */ previewCreatedCallback;
@property (copy, nonatomic) id /* block */ stateChangedCallback;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerControllerForPreview;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (nonatomic) struct CGPoint { double x; double y; } cropStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } cropEndPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropVideoArea;
@property (nonatomic) BOOL checkStatusing;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) double lastRequestRoomStatusTime;
@property (copy, nonatomic) NSString *defaultQuality;
@property (nonatomic) BOOL enablePlayerReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)stopPlay;
- (void)startPlay;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)createPlayerView;
- (void)checkAvatarStartPlayLivePreviewWithRoom:(id)a0 cropStartPoint:(struct CGPoint { double x0; double x1; })a1 cropEndPoint:(struct CGPoint { double x0; double x1; })a2 withDefaultQuality:(id)a3 enableReuse:(BOOL)a4 withPreviewCreatedComplete:(id /* block */)a5 withPlayStateChanged:(id /* block */)a6;
- (void)checkRoomStatus;
- (void)checkRoomResponse:(id)a0;
- (void)dropPlayerIntoReusePool;
- (void)requestCropRectWithRoomId:(id)a0 withStreamId:(id)a1 withCompletion:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCropSizeWithStartPoint:(struct CGPoint { double x0; double x1; })a0 withEndPoint:(struct CGPoint { double x0; double x1; })a1 withMediaSize:(struct CGSize { double x0; double x1; })a2;
- (void)checkAvatarStartPlayLivePreviewWithRoom:(id)a0 withUserId:(id)a1 withDefaultQuality:(id)a2 withPreviewCreatedComplete:(id /* block */)a3 withPlayStateChanged:(id /* block */)a4;
- (void).cxx_destruct;
- (id)playerView;
- (void)dealloc;

@end
