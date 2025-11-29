@class UIImageView, AWEIMShareModel;

@interface AWEIMSearchSelectedShareModelCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEIMShareModel *shareModel;

+ (id)identifier;

- (void)p_refreshUI;
- (void)configWithShareModel:(id)a0;
- (id)avatarURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
