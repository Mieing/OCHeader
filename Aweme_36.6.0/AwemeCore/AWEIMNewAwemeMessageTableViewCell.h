@class NSString, UIImageView, UILabel, UIView, AWEUILoadingView;

@interface AWEIMNewAwemeMessageTableViewCell : AWEIMSystemMessageTableViewCell <AWEIMFeedCardMagnifyTransitionProtocol, AWEIMOpenFeedDetailLoadingAnimation>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIImageView *awemePlayIconImageView;
@property (retain, nonatomic) UIImageView *awemeCoverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) id videoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (id)awemeID;
- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)displayImageView;
- (id)menuTargetView;
- (id)displayBubbleView;
- (void)tapOnCell:(id)a0;
- (void)p_updateUIWithNewAwemeMessage:(id)a0;
- (void)endAnimationForLoadingAwemeModel;
- (void)startAnimationForLoadingAwemeModel;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setupUI;
- (id)playerContainerView;

@end
