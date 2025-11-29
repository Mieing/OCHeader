@class UILabel, UIView;
@protocol AWEAvatarImageViewProtocol;

@interface AWESearchVideoCardAuthorInfoView : UIView

@property (retain, nonatomic) UIView<AWEAvatarImageViewProtocol> *authorImageView;
@property (retain, nonatomic) UILabel *authorNameView;
@property (retain, nonatomic) UILabel *publishTimeView;

+ (struct CGSize { double x0; double x1; })AuthorInfoSizeWithModel:(id)a0 width:(double)a1;

- (id)publishTimeWithModel:(id)a0;
- (void)updateWithModel:(id)a0 width:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
