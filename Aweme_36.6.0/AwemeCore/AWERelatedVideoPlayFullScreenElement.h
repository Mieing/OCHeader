@class UIButton, DUXPopover, NSString;

@interface AWERelatedVideoPlayFullScreenElement : AWERelatedVideoPlayBaseElement <DUXPopoverDelegate>

@property (retain, nonatomic) UIButton *fullScreenButton;
@property (retain, nonatomic) DUXPopover *fullScreenButtonPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)popoverDidDisappear:(id)a0;
- (void)setHide:(BOOL)a0;
- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (void)bindEvent;
- (void)updateFullScreenButton:(BOOL)a0;
- (void)hideFullScreenButtonPopover;
- (void)showFullScreenButtonPopover;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
