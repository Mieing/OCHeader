@class UIButton, DUXSelectPopover;

@interface AWERVResolutionElement : AWERelatedVideoPlayBaseElement

@property (retain, nonatomic) UIButton *resolutionButton;
@property (nonatomic) unsigned long long currentResolution;
@property (weak, nonatomic) DUXSelectPopover *resolutionSelectPopover;

+ (Class)aAWEPadRTVAdapterClass;

- (void)initializeElement;
- (void)bindEvent;
- (id)aAWEPadRTVAdapter;
- (void)refreshResolutionButton:(unsigned long long)a0;
- (void)showResolutionSelectView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
