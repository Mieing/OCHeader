@class ACCButton, NSString, UILabel, UIView, YYLabel;

@interface AWECloudAlbumAgreementAlertView : UIView

@property (copy, nonatomic) id /* block */ highlightAction;
@property (copy, nonatomic) id /* block */ refuseAction;
@property (copy, nonatomic) id /* block */ agreeAction;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) ACCButton *agreeBtn;
@property (retain, nonatomic) ACCButton *refuseBtn;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *agreeText;
@property (copy, nonatomic) NSString *refuseText;

- (void)agreeClick:(id)a0;
- (void)refuseClick:(id)a0;
- (id)initWithTitle:(id)a0 content:(id)a1 highlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 highlightAction:(id /* block */)a3 AgreeText:(id)a4 agreeAction:(id /* block */)a5 refuseText:(id)a6 refuseAction:(id /* block */)a7;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;

@end
