@class AWEAwemeModel, NSString, UIImageView, UIImage, UILabel, UIView, DUXButton;
@protocol AWEListenFeedCollectionListCellDelegate;

@interface AWEListenFeedCollectionListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIImageView *mixImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImage *mixImage;
@property (copy, nonatomic) NSString *mixPreString;
@property (copy, nonatomic) NSString *episodeString;
@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) BOOL isMixStyle;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) DUXButton *addListenLaterBtn;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *tagLabelContainer;
@property (retain, nonatomic) NSString *descriptionAccessibilityString;
@property (weak, nonatomic) id<AWEListenFeedCollectionListCellDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)configWithModel:(id)a0;
- (BOOL)isSupportedMixType;
- (void)updateListenLaterBtnWith:(BOOL)a0;
- (void)updateDescriptionLabelIfNeeded;
- (id)fontForButton;
- (void)p_onClickAddListenLaterBtn;
- (struct CGSize { double x0; double x1; })sizeForButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end
