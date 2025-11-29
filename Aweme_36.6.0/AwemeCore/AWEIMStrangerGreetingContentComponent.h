@class NSString;

@interface AWEIMStrangerGreetingContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) BOOL didCheckSender;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)closeButtonClicked;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (id)baseVC;
- (void)sendSelectEmojiWithGreetingEmoticon:(id)a0 andShowedIndex:(long long)a1;
- (void)willDisplayEmojiWithGreetingEmoticon:(id)a0 showedIndex:(long long)a1 props:(id)a2;
- (id)displayMessage;
- (void)deleteMessage;

@end
