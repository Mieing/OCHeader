@class IESLiveKTVDecorateCellModel, IESLiveImageView, UILabel, UIView, UIButton;

@interface IESLiveKTVDecorateCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *expireLabel;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *expireView;
@property (retain, nonatomic) UIView *lockView;
@property (retain, nonatomic) UIButton *schemeButton;
@property (retain, nonatomic) IESLiveImageView *selectedView;
@property (retain, nonatomic) IESLiveKTVDecorateCellModel *baseModel;
@property (nonatomic) BOOL shouldShowExpire;

- (void)didTapSchemeButton;
- (void).cxx_destruct;
- (void)update:(id)a0;

@end
