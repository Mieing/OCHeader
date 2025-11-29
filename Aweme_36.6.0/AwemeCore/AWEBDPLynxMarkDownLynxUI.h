@class NSString, AWEBDPLynxMarkDownBundle;

@interface AWEBDPLynxMarkDownLynxUI : LynxUI

@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) AWEBDPLynxMarkDownBundle *bundle;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__341;

- (void)onReceiveUIOperation:(id)a0;
- (void)didInsertChild:(id)a0 atIndex:(long long)a1;
- (void)eventBindLinkTapWithURL:(id)a0 text:(id)a1;
- (void)eventBindImageTapWithURL:(id)a0;
- (void)eventBindSelectionChangeWithText:(id)a0;
- (void)setSelectable:(BOOL)a0 forView:(id)a1;
- (id)findTypewriterCursorChildView;
- (void)trackMpMarkdownRenderResultWithMessageID:(id)a0 duration:(double)a1 textLength:(long long)a2 animationType:(id)a3 finished:(BOOL)a4;
- (id)tryGetUniqueID;
- (void)getContent:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
