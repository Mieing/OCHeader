@class UITextView, UIImageView, UILabel, UIView, UIButton;
@protocol IESIMMultiAvatarViewProtocol;

@interface AWEIMLiveGroupAnnouncementView : UIView

@property (retain, nonatomic) UIView *sampleContainerView;
@property (retain, nonatomic) UIView *sampleContentView;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *currentGroupLabel;
@property (retain, nonatomic) UILabel *manualSendTitleLabel;
@property (nonatomic) BOOL isPresenting;
@property (nonatomic) double topMarginOfSampleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *editLabel;
@property (retain, nonatomic) UILabel *introductionLabel;
@property (retain, nonatomic) UIImageView *ownerAvatar;
@property (retain, nonatomic) UILabel *ownerNameLabel;
@property (retain, nonatomic) UITextView *verifyingTag;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView<IESIMMultiAvatarViewProtocol> *multiAvatarView;
@property (retain, nonatomic) UILabel *subscribedNumberLabel;
@property (retain, nonatomic) UIButton *enableAnnouncementBtn;
@property (retain, nonatomic) UIView *editSectionContainerView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) UILabel *manualSendDescLabel;
@property (retain, nonatomic) UILabel *bubbleTitleLabel;

- (void)__setupUI;
- (void)configSendBtnWithStatus:(BOOL)a0 title:(id)a1;
- (void)configselectedImageViewWithStatus:(BOOL)a0;
- (void)configEditLabel:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
