@class UIImageView, UILabel, UIView, AWELifeFeedsUserInfo;

@interface AWELifeFeedsUserInfoView : UIView

@property (retain, nonatomic) UIView *authorContentView;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *infoIconImageView;
@property (retain, nonatomic) UILabel *infoNumberLabel;
@property (retain, nonatomic) AWELifeFeedsUserInfo *model;
@property (nonatomic) BOOL shouldHideInfoView;
@property (retain, nonatomic) UIView *infoView;

- (id)infoNumberWithCount:(long long)a0;
- (void)handleDiggAcitonWithStatus:(BOOL)a0;
- (void)updateDiggCount:(long long)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
