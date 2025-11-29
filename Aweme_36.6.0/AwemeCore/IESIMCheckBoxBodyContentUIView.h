@class UILabel, UIView;
@protocol IESIMCheckBoxProtocol;

@interface IESIMCheckBoxBodyContentUIView : UIView

@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView<IESIMCheckBoxProtocol> *checkBox;
@property (retain, nonatomic) UILabel *checkTextLabel;
@property (retain, nonatomic) UIView *checkView;
@property (readonly, nonatomic) BOOL checkBoxIsSelected;

- (id)initWithSubtitle:(id)a0 checkBoxText:(id)a1;
- (void)p_setSubviewLayout;
- (void)setUpUIWithSubtitle:(id)a0 checkText:(id)a1;
- (void)checkBoxChange:(id)a0;
- (void).cxx_destruct;

@end
