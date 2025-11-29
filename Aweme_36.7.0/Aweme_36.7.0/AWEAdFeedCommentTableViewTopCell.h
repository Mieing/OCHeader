@class UIView, UILongPressGestureRecognizer, NSString, UIImageView, YYLabel, AWEAdFeedCommentDetailViewModel, UILabel, AWECommerceInsetsLabel;
@protocol AWEAdFeedCommentTableViewTopCellActionDelegate;

@interface AWEAdFeedCommentTableViewTopCell : UITableViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *avatarBorderView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWECommerceInsetsLabel *tagLable;
@property (retain, nonatomic) YYLabel *commentContentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) AWEAdFeedCommentDetailViewModel *viewModel;
@property (weak, nonatomic) id<AWEAdFeedCommentTableViewTopCellActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFeedCommentUIThemeChangeNotification;
- (void)handleLongPressedEvent;
- (void)avatarDidClicked:(id)a0;
- (void)nameDidClicked:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleLongPressGesture:(id)a0;
- (void)setupUI;
- (void)configureWithViewModel:(id)a0;

@end
