@class IESIMDisableCardPresenter, AWEIMSmallCardPresenter, NSString;

@interface AWEIMSharePoiContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) IESIMDisableCardPresenter *disablePresenter;
@property (retain, nonatomic) AWEIMSmallCardPresenter *cardPresenter;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (void)p_cardTapped:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_createCardPresenter;
- (void)p_createDisablePresenter;
- (void)p_updateCardUnavailable;
- (id)p_messageSubtitle;
- (void)p_cardTapped;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end
