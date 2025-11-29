@class NSString, NSTimer, UIImage, UIImageView, AWEIMDouyinRedPacketCoverModel;
@protocol AWEIMDouyinRedPacketMessageProtocol, IESVideoPlayerProtocol;

@interface AWEPayMediaCoverView : UIView <IESVideoPlayerDelegate>

@property (retain, nonatomic) id<AWEIMDouyinRedPacketMessageProtocol> message;
@property (retain, nonatomic) UIImage *defaultCover;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *coverId;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *model;
@property (nonatomic) BOOL playStateBeforePause;
@property (retain, nonatomic) NSTimer *recallTimer;
@property (retain, nonatomic) UIImageView *blankCoverView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> player;
@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)refreshCoverId:(id)a0 scene:(long long)a1;
- (void)addSubviewIfNeeded:(id)a0;
- (void)p_addOberver;
- (id)initWithCoverId:(id)a0 scene:(long long)a1;
- (void)p_deactivateTimer;
- (void)p_playWithUrl:(id)a0;
- (void)p_setupBlankCoverUI;
- (void)p_initCover;
- (void)p_initOfficialCover;
- (void)p_initImageCover;
- (id)generatePlayer;
- (id)p_defaultCover;
- (void)setupBlankCoverView:(id)a0;
- (id)initWithMessage:(id)a0 scene:(long long)a1;
- (id)initWithCoverModel:(id)a0 scene:(long long)a1;
- (void)refreshCoverModel:(id)a0 scene:(long long)a1;
- (void)pauseWithRecall;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)reset;
- (void)resume;
- (void)layoutSubviews;
- (void)dealloc;
- (void)p_init;

@end
