@class NSString, MMUILabel, UIView;

@interface MMFinderLiveFansGroupSettingTableCell : MMFinderLiveFansGroupDetailBaseTableViewCell

@property (retain, nonatomic) NSString *leftTitle;
@property (nonatomic) unsigned long long settingType;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) BOOL isReserved;
@property (copy, nonatomic) id /* block */ valueChangeCallback;
@property (retain, nonatomic) MMUILabel *leftTitleLabel;
@property (retain, nonatomic) UIView *rightView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLeftTitleLabel;
- (void)layoutRightView;
- (void)reportAudienceReserveLiveNotificationInfo:(long long)a0;
- (void)updateReserveButtonTitleAndImage;
- (void)switchDidChanged:(id)a0;
- (void)onReserveButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
