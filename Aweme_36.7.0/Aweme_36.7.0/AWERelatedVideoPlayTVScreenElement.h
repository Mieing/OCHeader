@class UIButton;

@interface AWERelatedVideoPlayTVScreenElement : AWERelatedVideoPlayBaseElement

@property (retain, nonatomic) UIButton *tvButton;
@property (nonatomic) BOOL hidden;

- (void)setHide:(BOOL)a0;
- (void)initializeElement;
- (void)setAppear:(BOOL)a0;
- (void)bindEvent;
- (BOOL)shouldAppear;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
