@class NSString, NSDictionary, AWEAwemeModel, UIView, NSObject, NSNumber;
@protocol AWEShowPlayerControllerDelegate, AWELiveStreamPlayer, AWELiveVSMessageService;

@interface AWEShowLivePlayerController : NSObject <IESLivePlayerControllerDelegate, AWELivePaidLivePlayerDelegate, AWELiveVSMessageSubscriber, AWEShowPlayerControllerProtocol>

@property (retain, nonatomic) id<AWELiveStreamPlayer> liveStreamPlayer;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWELiveVSMessageService> messageService;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) id player;
@property (readonly, nonatomic) NSObject *model;
@property (weak, nonatomic) id<AWEShowPlayerControllerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (retain, nonatomic) NSNumber *defaultStartPlayTime;
@property (nonatomic) long long scaleMode;
@property (nonatomic, getter=isMute) BOOL mute;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)setCoverUrl:(id)a0;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)trialTimeDidChange:(double)a0;
- (void)viewStatusDidChange:(long long)a0 hasShareTickets:(BOOL)a1;
- (void)installMessageChannel;
- (void)uninstallMessageChannel;
- (void)onMessageReceivce:(id)a0 messageStr:(id)a1;
- (void)playWithParams:(id)a0;
- (void)pauseWithParams:(id)a0;
- (void)stopWithParams:(id)a0;
- (void)seekToTime:(double)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)updateWithModel:(id)a0;

@end
