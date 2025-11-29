@class UILabel;

@interface AWEMemoriesPlayerEmptyView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ shootAction;

- (void)showOnView:(id)a0 contentString:(id)a1;
- (void)cameraButtonClick:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
