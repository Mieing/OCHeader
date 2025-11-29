@class NSString;

@interface AWEIMShareMixVideoContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (void)p_didTapCard;
- (id)p_makeSmallCardProps;
- (id)p_makeSmallCardPresenter;
- (void)p_refreshCover:(id)a0;
- (void)p_trackTapAction;
- (id)displayMessage;
- (id)message;

@end
