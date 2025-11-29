@class AWEIMGeneralCardView, UITapGestureRecognizer, NSString, UILabel, AWEIMRefreshImageView, UIButton;

@interface AWEIMRTVInviteCardView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) UIButton *joinButton;
@property (retain, nonatomic) AWEIMGeneralCardView *bubbleView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMessage:(id)a0;

- (void)createComponents;
- (void)renderModel:(id)a0;
- (void)updateRouterParams:(id)a0;
- (void)configComponents;
- (void)handleJoinButtonClick:(id)a0;
- (void)handleBubbleTapAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)willDisplay;

@end
