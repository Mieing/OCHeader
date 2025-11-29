@class UILabel, UIImageView, UIView;
@protocol IESIMSwitchProtocol;

@interface AWEIMHalfScreenSwitchSettingCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *leftMinus;
@property (retain, nonatomic) UIView<IESIMSwitchProtocol> *aSwitch;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ didClickASwitchAction;

- (void).cxx_destruct;

@end
