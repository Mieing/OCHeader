@class AWEIMChatModel, NSString;

@interface AWEIMMoveFansHintComponent : AWEIMComponentBase <AWEIMMoveFansHintInterface, IESIMUserServiceMessage>

@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (nonatomic) BOOL shouldNotDisplay;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)removeHintChat;
- (void)needShowFansMovedNotice:(BOOL)a0;
- (void)p_loadShouldNotDisplayState;
- (void)p_addChat;
- (void)p_removeChat;
- (void).cxx_destruct;
- (void)dealloc;

@end
