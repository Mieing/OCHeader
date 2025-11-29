@class NSString, NSDictionary, AWECommentInputLynxBackgroundView, AWECommentInputLynxViewMethodParamModel, AWEAwemeModel;
@protocol AWECommentInputViewContextProtocol, AWECommentInputViewManagerProtocol;

@interface AWECommentInputLynxView : LynxUI

@property (nonatomic) BOOL didConfig;
@property (nonatomic) BOOL userTappedSend;
@property (retain, nonatomic) AWECommentInputLynxBackgroundView *lynxView;
@property (nonatomic) unsigned long long theme;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSString *locateAt;
@property (copy, nonatomic) NSDictionary *creationConfig;
@property (copy, nonatomic) NSDictionary *publishExtraParams;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> manager;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;
@property (copy, nonatomic) NSDictionary *replyComment;
@property (retain, nonatomic) AWECommentInputLynxViewMethodParamModel *paramModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long tempColorMode;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1441;
+ (id)__lynx_prop_config__1552;
+ (id)__lynx_prop_config__1593;
+ (id)__lynx_prop_config__1744;
+ (id)__lynx_prop_config__1885;
+ (id)__lynx_prop_config__1956;
+ (id)__lynx_ui_method_config__2017;
+ (id)__lynx_ui_method_config__2188;

- (void)setConfig:(id)a0 requestReset:(BOOL)a1;
- (void)setTheme:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)cleanData:(id)a0 withResult:(id /* block */)a1;
- (id)commentInputContext:(id)a0 awemeInfo:(id)a1;
- (void)renderBizInput:(id)a0;
- (void)renderCommentInput:(id)a0;
- (id)generateInputConfig:(id)a0;
- (id)generateCommentInputManager:(id)a0;
- (void)attachTrackServiceTo:(id)a0 paramModel:(id)a1;
- (void)observeEvent:(id)a0 paramModel:(id)a1 groupID:(id)a2;
- (void)publishCommentPanelJSBEventWithName:(id)a0 params:(id)a1;
- (void)setLocateAt:(id)a0 requestReset:(BOOL)a1;
- (void)setReplyComment:(id)a0 requestReset:(BOOL)a1;
- (void)setPublishExtraParams:(id)a0 requestReset:(BOOL)a1;
- (void)setCreationConfig:(id)a0 requestReset:(BOOL)a1;
- (void)showInput:(id)a0 withResult:(id /* block */)a1;
- (void)attachView;
- (void).cxx_destruct;
- (id)init;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)render:(id)a0;
- (id)createView;
- (void)detachView;

@end
