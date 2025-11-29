@class WCFinderJumpInfo, NSString, UILabel, UIView, UIButton;
@protocol WCFinderSimpleFeedbackViewDelegate;

@interface WCFinderSimpleFeedbackView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIButton *complainButton;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<WCFinderSimpleFeedbackViewDelegate> delegate;
@property (retain, nonatomic) WCFinderJumpInfo *descriptionJumpInfo;
@property (copy, nonatomic) NSString *dislikeTitle;
@property (copy, nonatomic) NSString *simpleTitle;
@property (copy, nonatomic) NSString *simpleDesc;
@property (copy, nonatomic) NSString *complainTitle;

- (id)initWithMaxWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)updateFlexLayout;
- (id)genActionButtonWithTitle:(id)a0 imageName:(id)a1;
- (void)onClickLikeButton:(id)a0;
- (void)onClickDislikeButton:(id)a0;
- (void)onClickComplainButton:(id)a0;
- (void)onClickDescrptionJumpInfo;
- (void).cxx_destruct;

@end
