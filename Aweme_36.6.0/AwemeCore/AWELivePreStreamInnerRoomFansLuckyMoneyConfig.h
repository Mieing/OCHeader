@class AWELivePreStreamInnerRoomDisplayManager, AWELivePreStreamInnerRoomFansLuckyMoneyView, NSString, AWEAwemeModel, IESLiveGCDTimer, NSNumber, AWELivePreStreamContext;

@interface AWELivePreStreamInnerRoomFansLuckyMoneyConfig : NSObject <AWELivePreStreamInnerRoomDisplayConfigProtocol>

@property (weak, nonatomic) AWELivePreStreamInnerRoomDisplayManager *displayManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) AWELivePreStreamInnerRoomFansLuckyMoneyView *contentView;
@property (nonatomic) unsigned long long configType;
@property (retain, nonatomic) NSNumber *priority;
@property (nonatomic) BOOL receiveMsg;
@property (nonatomic) BOOL msgCanShow;
@property (nonatomic) BOOL isClickedArea;
@property (nonatomic) long long expireTime;
@property (copy, nonatomic) NSString *luckyID;
@property (retain, nonatomic) IESLiveGCDTimer *showTimer;
@property (retain, nonatomic) IESLiveGCDTimer *startTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 displayManager:(id)a1 context:(id)a2;
- (void)startCountDownTimerIfNeeded:(id /* block */)a0;
- (void)handleMessage:(id)a0 actionBlock:(id /* block */)a1;
- (void)onUserQuitLiveRoom:(id)a0;
- (id)enterRoomParams;
- (id)enterRoomBuriedParams;
- (id)enterRoomBussinessParams;
- (id)enterFirstRoomParams;
- (BOOL)isValidTime;
- (void)showLuckyMoneyWithBlock:(id /* block */)a0;
- (void)hideLuckyMoneyWithBlock:(id /* block */)a0;
- (BOOL)canDisplayElementWithModel:(id)a0 message:(id)a1;
- (id)getDisplayTextWithMessage:(id)a0;
- (BOOL)checkCanShowElement;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)reset;

@end
