@class UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWENearbyC2FeedInteractionView : UIView

@property (retain, nonatomic) UIView *authorContentView;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *infoIconImageView;
@property (retain, nonatomic) UILabel *infoNumberLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL shouldHideInfoView;
@property (retain, nonatomic) UIView *infoView;

- (void)updateInfoWithModel:(id)a0;
- (id)infoNumberWithCount:(long long)a0;
- (id)initWithModel:(id)a0 infoViewHidden:(BOOL)a1;
- (void)handleDiggAcitonWithStatus:(BOOL)a0;
- (void)updateDiggCount:(long long)a0;
- (double)authorNameLabelFont;
- (void).cxx_destruct;
- (void)setupUI;

@end
