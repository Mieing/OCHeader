@class AWEProfileExtensionAreaCardModel, UIImageView, UILabel, UIView, AWEUserModel;

@interface AWEIMFansGroupProfileEntryCard : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) double cardWidth;

- (void)__setupUI;
- (double)widthOfCard;
- (void)updateViewWithUserModel:(id)a0 cardModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateView;

@end
