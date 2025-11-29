@class UILabel, MMHeadImageView;

@interface MMFinderLiveCommentAssistantCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMHeadImageView *headerImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL circleHeader;

- (void)configWithContact:(id)a0;
- (void)switchToDeleteStyle;
- (void)switchToAddStyle;
- (void)resetHeaderImageView;
- (void)layoutSubviews;
- (void)initUI;
- (void).cxx_destruct;

@end
