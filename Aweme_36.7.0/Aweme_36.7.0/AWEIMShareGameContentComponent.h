@class NSString;

@interface AWEIMShareGameContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)transitionGameModelFromMessage:(id)a0;
+ (void)didTapGame:(id)a0;
+ (void)p_didTapCard:(id)a0 context:(id)a1;
+ (void)p_trackTapAction:(id)a0 context:(id)a1;

- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (id)chatTypeString;
- (void)p_didTapCard;
- (id)p_makeSmallCardProps;
- (id)p_makeSmallCardPresenter;
- (id)displayMessage;
- (id)message;

@end
