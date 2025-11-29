@class AWETeenRecAuthorVideo, UIImageView, UILabel;

@interface AWETeenAuthorRecommendVideoCell : UICollectionViewCell

@property (retain, nonatomic) AWETeenRecAuthorVideo *model;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (retain, nonatomic) UIImageView *diggIconView;
@property (retain, nonatomic) UILabel *diggCountLabel;

+ (id)identifier;

- (void)configWithModel:(id)a0 awemeModel:(id)a1;
- (void)p_onAwemeDiggNotification:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
