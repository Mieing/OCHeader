@class NSString, _TtC6WeChat24SystemAuthCapabilityInfo, RichTextView;

@interface SystemCapabilityAuthViewController : MMStackViewController <ILinkEventExt, MMNavBarInteractiveDelegate>

@property (retain, nonatomic) _TtC6WeChat24SystemAuthCapabilityInfo *capabilityInfo;
@property (retain, nonatomic) RichTextView *richTextLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCapability:(unsigned int)a0;
- (void)viewDidLoad;
- (BOOL)useBlackStatusbar;
- (void)initView;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)initInteractiveNavi;
- (void)updateViewConstraints;
- (id)genCell:(id)a0;
- (id)richTextView;
- (id)genHeaderView;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
