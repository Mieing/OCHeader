@class MemoryMappedKV, NSString, CMessageWrap, UITapGestureRecognizer;

@interface ChatBotAskAIAsstVoIPViewController : ChatBotBaseVoIPViewController <UIGestureRecognizerDelegate>

@property (nonatomic) int curRoomMode;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) UITapGestureRecognizer *closeTapGesture;
@property (retain, nonatomic) CMessageWrap *transferMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (id)initWithScene:(unsigned int)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (unsigned int)getChatbotVoIPScene;
- (void)fetchRoomInfo;
- (int)getOpenScene;
- (void)checkNeedModHeadImage;
- (void)layoutBackground;
- (void)layoutTalkingView;
- (int)getCurrRoomMode;
- (void)boardViewHitTest:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;

@end
