@class AWEProfileExtensionAreaCardModel, NSString, UIImageView, UILabel, AWEUserModel;

@interface AWECompanyProfileExtensionAreaCard : UIView

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double cardWidth;
@property (nonatomic) BOOL tracked;
@property (nonatomic) BOOL didTrackTaskShow;
@property (copy, nonatomic) id /* block */ didTapCardViewBlock;

- (void)cardWillAppear;
- (id)configOriginAdInfoWithCardData:(id)a0;
- (void)didCardViewTapped;
- (id)initWithUserModel:(id)a0 cardModel:(id)a1 didTapCardViewBlock:(id /* block */)a2;
- (double)widthOfCard;
- (void).cxx_destruct;
- (void)updateView;
- (void)setupUI;

@end
