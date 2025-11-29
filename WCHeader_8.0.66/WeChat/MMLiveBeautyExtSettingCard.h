@class MMUILabel, UISwitch;
@protocol MMLiveBeautyExtSettingCardDelegate;

@interface MMLiveBeautyExtSettingCard : MMUIView

@property (weak, nonatomic) id<MMLiveBeautyExtSettingCardDelegate> delegate;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UISwitch *settingSwitch;

- (id)init;
- (void)setupSubviews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)heightToFit;
- (void)switchDidChanged:(id)a0;
- (void).cxx_destruct;

@end
