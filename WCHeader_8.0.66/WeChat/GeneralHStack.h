@class UIImageView, UISwitch, MMExtUILabel, UISlider, MMUILabel;

@interface GeneralHStack : UIStackView

@property (retain, nonatomic) MMExtUILabel *_extLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) MMUILabel *tagLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UISwitch *uiSwitch;
@property (retain, nonatomic) UISlider *uiSlider;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *accessoryView;

- (id)extLabel;
- (void)set_extLabel:(id)a0;
- (id)_extLabel;
- (id)init;
- (void).cxx_destruct;

@end
