@class UIView, DUXTextTag, AWERelationListNameLabel, AWEAccessibilityCustomActionsManager, UIImageView, UIButton, DUXButton, UILabel, AFDColorRingView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEFansListUserListCell : AWERelationListUserBaseCell {
    DUXButton *_actionButton;
    AWERelationListNameLabel *_nameLabel;
}

@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UIImageView *liveMarkViewTag;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) DUXTextTag *descTagLabel;
@property (retain, nonatomic) UIButton *removeButton;
@property (retain, nonatomic) AWEAccessibilityCustomActionsManager *accessibilityManager;
@property (retain, nonatomic) AFDColorRingView *colorRingView;
@property (copy, nonatomic) id /* block */ removeButtonClickBlock;
@property (nonatomic) BOOL showLive;
@property (nonatomic) BOOL showOnlineDotView;
@property (nonatomic) BOOL showRemoveButton;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showArrowIcon;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL isVSFirst;
@property (nonatomic) BOOL showStory;
@property (nonatomic) long long liveStatus;
@property (copy, nonatomic) id /* block */ unBindColorRingView;

+ (id)_defaultImage;

- (void)actionBtnClicked;
- (void)configWithModel:(id)a0;
- (void)setDescLabelModel:(id)a0;
- (void)_layoutNameAndDesc;
- (void)_showLiveMaskView;
- (void)showStory25RingViewIfNeeded:(BOOL)a0;
- (id)liveInteractTagImage;
- (void)liveRoomClicked;
- (void)moreButtonClicked;
- (void)removeBtnClicked;
- (void)setNameLabelModel:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)nameLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)setNameLabel:(id)a0;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)a0;
- (double)avatarWidth;

@end
