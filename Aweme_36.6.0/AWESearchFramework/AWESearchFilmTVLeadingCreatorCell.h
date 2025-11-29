@class AWEGeneralFilmTVLeadingCreatorInfoModel, UIImageView, UILabel;

@interface AWESearchFilmTVLeadingCreatorCell : UICollectionViewCell

@property (retain, nonatomic) AWEGeneralFilmTVLeadingCreatorInfoModel *model;
@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UIImageView *topicImgView;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) UIImageView *checkImgView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *roleLabel;

- (void)updateCheckImgViewUI;
- (void)updateTopicImgViewUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateModel:(id)a0;

@end
