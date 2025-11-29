@class NSString, UIImageView, UIView, HTSLiveRoom;
@protocol IESLivePlayerProtocol;

@interface IESLiveSlideUserFeedbackPlayerView : UIView <IESLivePlayerControllerDelegate>

@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) UIView *playerBackgroudView;
@property (retain, nonatomic) UIImageView *coverImage;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hadRenderFirstFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)clearPlayer;
- (BOOL)shouldShowPlayer;
- (void)refreshWithRoom:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
