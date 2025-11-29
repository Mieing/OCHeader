@class AWEBinding, NSString, UIImageView, NSProgress, UILabel, UIView, ACCAnimatedButton;
@protocol ACCEditBottomThumbnailCollectionViewCellDelegate;

@interface ACCEditBottomThumbnailCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playStatusImageView;
@property (retain, nonatomic) UIView *playProgressView;
@property (retain, nonatomic) UIView *coverBorderView;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) ACCAnimatedButton *deleteButton;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) NSProgress *progress;
@property (weak, nonatomic) AWEBinding *progressBinding;
@property (weak, nonatomic) id<ACCEditBottomThumbnailCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSString *projectUUID;
@property (nonatomic) BOOL isShowDeleteButton;
@property (nonatomic) BOOL isNoteStyle;
@property (copy, nonatomic) id /* block */ didClickedDeleteButtonBlock;

+ (id)cellIdentifier;

- (void)updatePlayProgress:(id)a0;
- (void)updateSelected:(BOOL)a0;
- (void)updatePlayStatus:(unsigned long long)a0;
- (void)updateCoverImage:(id)a0;
- (void)deleteButtonDidClicked:(id)a0;
- (void)hiddenPlayProgressView:(BOOL)a0;
- (void)updateVideoDuration:(double)a0;
- (void)updateCellViewAlpha:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
