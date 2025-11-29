@class IESECCommentItemView, NSCalendar, NSString, UIImageView, UIButton, NSMutableArray, UILabel, IESECCommentDetailModel;
@protocol IESECFeedCommentTableViewCellActionDelegate;

@interface IESECFeedCommentTableViewCell : UITableViewCell <IESECCommentItemViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *titleSubLabel;
@property (retain, nonatomic) NSMutableArray *commnetImages;
@property (retain, nonatomic) IESECCommentItemView *commentView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *replyLabel;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) NSCalendar *calendar;
@property (weak, nonatomic) id<IESECFeedCommentTableViewCellActionDelegate> delegate;
@property (retain, nonatomic) IESECCommentDetailModel *detailModel;
@property (copy, nonatomic) id /* block */ clickLikeButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateCellHeight:(id)a0 superViewWidth:(double)a1;
+ (double)calculateCellHeight:(id)a0;

- (void)likeButtonTapped:(id)a0;
- (void)updateAutoPlayState:(BOOL)a0;
- (double)commentItemCellCornerRadius;
- (void)openCommentItemPreviewWithImageURLArray:(id)a0 selectedImageIndex:(long long)a1 videoModel:(id)a2;
- (void)updateLikeButtonStatus:(id)a0;
- (void)configureWithCommentModel:(id)a0;
- (void)onIESECFeedCommentUIThemeChangeNotification;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
