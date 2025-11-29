@class UIButton, AWEAwemeModel;
@protocol AWESearchMenuFilterSettingViewProtocol;

@interface AWESearchMenuFilterSettingView : UIView

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) id<AWESearchMenuFilterSettingViewProtocol> delegate;

- (void)configUI;
- (void)resetButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)confirmButtonClicked;

@end
