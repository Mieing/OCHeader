@class UIView, IESLiveUGCVideoPreviewConfig;

@interface IESLiveUGCVideoPreviewPage : UIView

@property (retain, nonatomic) IESLiveUGCVideoPreviewConfig *config;
@property (retain, nonatomic) UIView *baseContainer;

- (void)didClickActionButton;
- (void)showOnContainer:(id)a0;
- (void)setupContainerLabel:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
