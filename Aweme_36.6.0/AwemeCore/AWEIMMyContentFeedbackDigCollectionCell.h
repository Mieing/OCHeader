@class AWEIMMyContentFeedbackDigModel, UIImageView, UILabel, NSMutableArray, UIView;

@interface AWEIMMyContentFeedbackDigCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSMutableArray *tags;
@property (retain, nonatomic) UIView *tagBackground;
@property (weak, nonatomic) AWEIMMyContentFeedbackDigModel *model;
@property (nonatomic) double totalTagsWidth;

+ (id)identifier;

- (void)__setupUI;
- (void)__setupTagWithTags:(id)a0;
- (void)__setupNameLabelWithName:(id)a0;
- (void)__layoutTags;
- (void)__didClickAvatar;
- (void)configWithModel:(id)a0 conversation:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
