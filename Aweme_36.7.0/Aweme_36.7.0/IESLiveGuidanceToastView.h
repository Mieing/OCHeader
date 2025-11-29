@class UIButton, UILabel, NSString;

@interface IESLiveGuidanceToastView : UIView

@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *detailInfo;

- (void)showOnView:(id)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)layout;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setup;
- (void)show;

@end
