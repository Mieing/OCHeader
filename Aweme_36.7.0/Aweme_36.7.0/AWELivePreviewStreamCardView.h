@class UIImageView, NSString, AWEAwemeModel;
@protocol AWELiveStreamPlayer, AWELivePreviewStreamViewDelegate;

@interface AWELivePreviewStreamCardView : UIView <IESLivePlayerControllerDelegate, AWELivePreviewStreamViewProtocol>

@property (retain, nonatomic) id<AWELiveStreamPlayer> playerControllerForPreview;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWELivePreviewStreamViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentRoomID;
- (void)stopPlay;
- (void)setupAttachedView:(id)a0;
- (void)setupPlayerDelegate:(id)a0;
- (void)updateWithAwemeModel:(id)a0 withImmediatePlay:(BOOL)a1;
- (void)startPlay;
- (void)removeFromAttachedView;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTrackConfig:(id)a0;
- (void)playerReloadStreamWithAwemeModel:(id)a0;
- (void)initializePlayer:(id)a0;
- (void)setupCoverBlurImageView;
- (void).cxx_destruct;
- (void)setMute:(BOOL)a0;

@end
