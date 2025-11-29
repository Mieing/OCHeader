@class NSString;

@interface AWEIMExchangeAnswerContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)backgroundUrlStringWithMsg:(id)a0;
+ (id)extraTrackingParams:(id)a0;
+ (void)transferToExchangeAnswerWithExchangeAnswerMessage:(id)a0 entrance:(id)a1 enterFrom:(id)a2 showSharePanel:(BOOL)a3 context:(id)a4;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)didTapShareBackgroundCover:(id)a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;

@end
