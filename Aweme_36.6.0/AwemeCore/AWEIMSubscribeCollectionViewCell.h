@class AWEIMSubscribeCollectionViewCellModel, UIImageView, UIView, UILabel, UIButton;
@protocol AWEIMSubscribeCollectionViewCellDelegate;

@interface AWEIMSubscribeCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backgroudView;
@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIButton *nameButton;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *coverTitleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *maskLayerView;
@property (weak, nonatomic) id<AWEIMSubscribeCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWEIMSubscribeCollectionViewCellModel *viewModel;

- (void)__addSubviews;
- (void)__setUpGestures;
- (void)longPressGesRecognized;
- (struct CGSize { double x0; double x1; })sizeWithText:(id)a0 font:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;
- (id)backgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
