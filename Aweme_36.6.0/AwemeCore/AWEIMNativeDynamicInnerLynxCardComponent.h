@class AWEIMMessageConversation, NSString, NSDictionary, IESIMDynamicPatchModel, NSAttributedString;

@interface AWEIMNativeDynamicInnerLynxCardComponent : AWEIMFlexComponent <AWEIMMessageContentInterface, IESIMBulletCellContentViewDelegate, AWEIMInnerMessageContentComponentProtocol>

@property (retain, nonatomic) NSDictionary *content;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) IESIMDynamicPatchModel *dynamicpatch;
@property (retain, nonatomic) NSDictionary *dict;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isLastElement;
@property (retain, nonatomic) NSAttributedString *displayAttributedString;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (BOOL)enableDisplay;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)displayAttributedContent;
- (void)container:(id)a0 reuseWithSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })innerSize;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;

@end
