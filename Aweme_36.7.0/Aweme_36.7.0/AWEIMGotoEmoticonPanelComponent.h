@class NSString;

@interface AWEIMGotoEmoticonPanelComponent : AWEIMComponentBase

@property (retain, nonatomic) NSString *initialUniqueID;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (void)p_handleGotoEmoticonPanel:(id)a0;
- (void)scrollToUniqueID:(id)a0;
- (void).cxx_destruct;

@end
