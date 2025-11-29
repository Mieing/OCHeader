@class UIButton, UIImageView, UILabel, UIView, IESLiveTagView;
@protocol IESLiveAnnouncementCardViewDelegate;

@interface IESLiveAnnouncementCardView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIImageView *moreFuncImageView;
@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) IESLiveTagView *auditStatusView;
@property (retain, nonatomic) IESLiveTagView *brokerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *contentDivideLine;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *countDivideLine;
@property (retain, nonatomic) UILabel *luckyMoneyLabel;
@property (retain, nonatomic) UIImageView *luckyMoneyImage;
@property (retain, nonatomic) UIView *expireLabelContainer;
@property (retain, nonatomic) UILabel *expireLabel;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *funcContainerView;
@property (retain, nonatomic) IESLiveTagView *shareView;
@property (retain, nonatomic) UIButton *shareToFriendButton;
@property (retain, nonatomic) UIButton *shareToGroupButton;
@property (weak, nonatomic) id<IESLiveAnnouncementCardViewDelegate> delegate;

- (void)updateDateLabelWithModelModel:(id)a0;
- (void)updateMoreFunctionWithModel:(id)a0;
- (void)updateContentContainerWithModel:(id)a0;
- (void)updateExpireLabelWithModel:(id)a0;
- (void)updateTagContainerWithModelModel:(id)a0;
- (void)updateBottomContainerWithModel:(id)a0;
- (void)updateFuncContainerWithModelModel:(id)a0;
- (void)topContainerDidTapped;
- (void)moreFuncDidTapped;
- (id)shareButtonWithText:(id)a0;
- (void)shareToFriendDidTapped;
- (void)shareToGroupDidTapped;
- (id)buttonTagConfiguration;
- (void)shareDidTapped;
- (void)brokerDidTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)setupLayout;

@end
