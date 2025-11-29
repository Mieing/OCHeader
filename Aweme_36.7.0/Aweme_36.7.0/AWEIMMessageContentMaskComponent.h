@class UIImage, NSString;

@interface AWEIMMessageContentMaskComponent : AWEIMFlexComponent <AWEIMMessageContentMaskInterface, AWEIMMediaContentAction, AWEIMMessageContentInterface, AWEIMGroupExchangeDataMessage>

@property (nonatomic) long long lastExchangeResponseSeverMessageId;
@property (weak, nonatomic) UIImage *displayImage;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_createPresenterIfNeeded;
- (void)didUpdateBatchInfoList:(id)a0 batchIDs:(id)a1 source:(unsigned long long)a2;
- (void)didFinishSetImage:(id)a0 ofMessage:(id)a1;
- (void)p_addKVO:(id)a0;
- (BOOL)isDisplayingMask;
- (void)p_updateViewHiddenProps;
- (BOOL)isCurrentMessage:(id)a0;
- (void)p_observeMessage:(id)a0;
- (void)p_configMosaicPropsIfNeeded:(id)a0 ofMessage:(id)a1;
- (void)showOrDismissWithMessage:(id)a0 isDismiss:(BOOL)a1 animation:(BOOL)a2;
- (void).cxx_destruct;
- (id)maskView;
- (id)displayMessage;
- (void)dealloc;

@end
