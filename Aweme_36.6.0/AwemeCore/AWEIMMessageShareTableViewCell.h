@class UIStackView, NSString, UIView, IESIMAnimatedButton, UIImageView, AWEIMMessageShareCellViewModel, IESIMContactPickerRelationTagView, YYLabel, AWEIMMessageShareSendButton, AWEIMCardStyleCellContainerView, UILabel;
@protocol AWEIMMessageShareTableViewCellDelegate;

@interface AWEIMMessageShareTableViewCell : UITableViewCell <AWEIMStreakDisplayManagerDelegate>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *statusLabel;
@property (retain, nonatomic) UIStackView *statusLabelStackView;
@property (retain, nonatomic) IESIMContactPickerRelationTagView *relationTag;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UIView *redPacketView;
@property (retain, nonatomic) UIImageView *iconInternalView;
@property (retain, nonatomic) AWEIMMessageShareCellViewModel *viewModel;
@property (retain, nonatomic) UIImageView *rightFunctionImageView;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (nonatomic) BOOL isBigStyle;
@property (retain, nonatomic) AWEIMCardStyleCellContainerView *containerView;
@property (retain, nonatomic) IESIMAnimatedButton *customButton;
@property (retain, nonatomic) UIView *titleContainer;
@property (nonatomic) BOOL didLayoutForOpt;
@property (retain, nonatomic) UIImageView *aiTagImageView;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (weak, nonatomic) id<AWEIMMessageShareTableViewCellDelegate> delegate;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *subNameLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEIMMessageShareSendButton *shareButton;

- (void)asyncDidUpdateIMStreakView;
- (BOOL)hitStreakUpdateExp;
- (void)updateSelectedStatus:(BOOL)a0;
- (void)updateContainerViewBackgroundColor;
- (void)updateConsecutiveChatStatusWithModel:(id)a0;
- (void)updateLayoutForBigStyle;
- (void)relayoutForOptimizedUIIfNeeded;
- (void)updateWithModel:(id)a0 selectMode:(BOOL)a1;
- (void)updateWithButtonState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)onShareButtonClick;
- (void)p_addLongPressGesForAvatar;
- (void)p_longPressGesHandler:(id)a0;
- (void)p_addHighlightToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)p_updateRelationTag:(id)a0;
- (void)updateIncentiveInfoWithShareModel:(id)a0;
- (void)updateStatusLabelWithModel:(id)a0;
- (void)updateShareButtonWidth:(id)a0;
- (void)updateRedPacketView;
- (void)updateAiTagStatus:(id)a0;
- (void)p_layoutTitleContainer:(double)a0;
- (double)p_shareButtonWidth:(id)a0;
- (void)acquireConsecutiveChatStatusWithShareModel:(id)a0 completion:(id /* block */)a1;
- (void)customButtonTapped:(id)a0;
- (id)p_makeSelectStateImageView;
- (void)setupRedPacketView;
- (void)configWithCellCornerType:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)accessibilityElements;
- (void)updateWithModel:(id)a0;
- (void)updateActiveStatus;
- (id)p_count;

@end
