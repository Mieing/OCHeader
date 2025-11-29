@class UIButton;

@interface AWERelatedVideoDanmakuElement : AWERelatedVideoPlayBaseElement

@property (retain, nonatomic) UIButton *danmakuInputButton;

- (void)initializeElement;
- (void)bindEvent;
- (void)updateDanmakuButton;
- (BOOL)shouldShowDanmakuButton;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
