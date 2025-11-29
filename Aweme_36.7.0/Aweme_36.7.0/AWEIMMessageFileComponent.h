@class NSString;

@interface AWEIMMessageFileComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)p_didTapCard:(id)a0 context:(id)a1 fileVM:(id)a2;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_createPresenter;
- (void)p_bindToVM;
- (id)p_makeReadableSize;
- (void)p_didTapCard;
- (id)fileVM;
- (id)displayMessage;
- (id)message;

@end
