@class NSTimer, NSString, HTSEventContext;
@protocol IESLiveCustomConfig, HTSLiveCommentReactions, IESLiveGiftStructOuterProtocol, IESLiveRoomService;

@interface IESLiveCommentGiftViewModel : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) double startShowTime;
@property (nonatomic) BOOL overCountLimit;
@property (retain, nonatomic) id<IESLiveGiftStructOuterProtocol> currentGift;
@property (copy, nonatomic) NSString *currentComment;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (weak, nonatomic) id<HTSLiveCommentReactions> reactions;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long status;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)sendGift:(id)a0;
- (id)initWithRoomModel:(id)a0 matchingSuccess:(id /* block */)a1 failure:(id /* block */)a2;
- (void)matchingGift:(id)a0;
- (id)getBgImageURL:(id)a0;
- (id)getWebpImageURL:(id)a0;
- (void)setupFrequencyConfig;
- (void)showGiftView:(id)a0;
- (void)hideGiftView:(long long)a0;
- (void)updateFrequencyConfig:(long long)a0;
- (void)prepareSendCommentGift;
- (void)tr_giftViewTap;
- (void)goLogin;
- (BOOL)isBanlanceEnough;
- (void)sendCommentGift;
- (void)sendFakeCommentMessage;
- (void)tr_giftViewShow;
- (void)tr_giftViewDismiss:(long long)a0;
- (void)checkOverCountLimit;
- (id)getURL:(id)a0 dataSource:(id)a1;
- (void)keyboardExit;
- (void).cxx_destruct;
- (void)invalidate;
- (void)fire;

@end
