@class IESLiveEmptyViewConfig, UILabel, UIView, IESLiveEmptyView;

@interface IESLiveGameOpenPlatformPanelErrorView : UIView

@property (retain, nonatomic) IESLiveEmptyViewConfig *emptyViewConfig;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *tapView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)tap;

@end
