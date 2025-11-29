@class UIImageView, UIImage, UILabel, UIView, MMListenSimplePlayableInfo;

@interface RingBackAddToTingCell : UITableViewCell

@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIImageView *webCoverView;
@property (retain, nonatomic) UILabel *songLable;
@property (retain, nonatomic) UILabel *singerLable;
@property (retain, nonatomic) UILabel *timeLable;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) MMListenSimplePlayableInfo *info;
@property (nonatomic) BOOL isSelected;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContent:(id)a0 isSelected:(BOOL)a1;
- (void)updateSelectedStatus:(BOOL)a0;
- (void)initSubView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
