@class AWEIMUIButtonPresenter, NSString, AWEIMYYLabelPresenter, AWEIMUIViewPresenter;

@interface IESIMTextAndButtonContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMYYLabelPresenter *contentPresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *dividerPresenter;
@property (retain, nonatomic) AWEIMUIButtonPresenter *buttonPresenter;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (double)dividerLineHeight;
+ (double)buttonHeight;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (unsigned long long)cachedButtonState;
- (BOOL)isButtonExpired;
- (void)cacheWithButtonState:(unsigned long long)a0;
- (void)reloadButtonProps;
- (id)buttonProps;
- (void)p_createContentPresenter;
- (void)p_createDividerPresenter;
- (void)p_createButtonPresenter;
- (double)bubbleViewHeight;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end
