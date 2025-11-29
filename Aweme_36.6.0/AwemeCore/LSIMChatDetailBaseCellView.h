@class UIStackView, UIView, NSString, UIImageView, LSIMUserMsgFooterView, YYLabel, UILabel, LSIMChatDetailBaseCellVM;

@interface LSIMChatDetailBaseCellView : LSListCellView <LSIMUserMsgFooterViewDelegate>

@property (retain, nonatomic) LSIMChatDetailBaseCellVM *cellVM;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIView *messageInfoView;
@property (retain, nonatomic) UIStackView *messageInfoStackView;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIView *timeView;
@property (retain, nonatomic) UIView *userView;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *msgContentContainer;
@property (retain, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIView *textBubbleView;
@property (retain, nonatomic) YYLabel *textContentLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *sharkView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *sharkLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *userTagLabel;
@property (retain, nonatomic) LSIMUserMsgFooterView *userFooterView;
@property (retain, nonatomic) UILabel *robotTransLabel;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) BOOL cancelsTouchesInContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentFont;
- (void)configWithCellVM:(id)a0;
- (void)addContainerGestures;
- (void)addWholeContentGesture;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdge;
- (void)bindReusableWithBindingObserver:(id)a0 handler:(id /* block */)a1;
- (void)removeAITipLabel;
- (void)addAITipLabelWithText:(id)a0;
- (void)bindFooterAndRiskContent;
- (void)updateByRecall:(id)a0;
- (void)handleContainerLongPressGesture:(id)a0;
- (void)handleContainerTapGesture:(id)a0;
- (void)avatarImageViewDidTapped:(id)a0;
- (void)robotTransLabelDidTapped;
- (double)textLabelContentWidth;
- (void)footerViewDidTappedWithCurrentStatus:(unsigned long long)a0;
- (void)handleWholeContainerLongPressGesture:(id)a0;
- (void)updateImageView:(id)a0 imageURL:(id)a1;
- (void)setupContainerView;
- (void).cxx_destruct;
- (id)titleFont;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;
- (void)setupView;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
