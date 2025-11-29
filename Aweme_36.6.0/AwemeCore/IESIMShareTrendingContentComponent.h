@class NSString;

@interface IESIMShareTrendingContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)didTapCard;
- (void)p_trackTapCard;
- (unsigned long long)p_jumpTrendingType;
- (id)subtitleString;
- (id)displayMessage;
- (id)message;
- (id)titleString;

@end
