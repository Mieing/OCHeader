@class AWEIMTagButton, AWEIMUnreadDotView, UIImageView, AWEIMBaseLabel, UIView, AWEIMChatListHighLightHintLabel, NSString;
@protocol AWEIMBaseCollectionViewEventProtocol, AWEIMMainStrangerViewModelProtocol;

@interface AWEIMStrangerMainCollectionViewCell : AWEIMSwipeCollectionViewCell <UIGestureRecognizerDelegate, AWEIMStrangerCollectionViewCellProtocol>

@property (retain, nonatomic) id<AWEIMMainStrangerViewModelProtocol> viewModel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEIMBaseLabel *nameLabel;
@property (retain, nonatomic) UIImageView *verifiedIconView;
@property (retain, nonatomic) AWEIMBaseLabel *timeLabel;
@property (retain, nonatomic) AWEIMBaseLabel *messageLabel;
@property (retain, nonatomic) AWEIMTagButton *relationshipButton;
@property (retain, nonatomic) AWEIMTagButton *locationButton;
@property (retain, nonatomic) AWEIMTagButton *ageButton;
@property (retain, nonatomic) AWEIMChatListHighLightHintLabel *draftLabel;
@property (retain, nonatomic) AWEIMUnreadDotView *unreadView;
@property (retain, nonatomic) UIView *dotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMBaseCollectionViewEventProtocol> delegate;

+ (id)cellReuseIdentifier;

- (void)configCell;
- (void)addKVO;
- (void)layoutTimeLabel;
- (id)getCacheImage;
- (id)swipeCollectionViewCelldelegate;
- (void)addAcessbilityLabel;
- (void)updateUnreadView:(id)a0;
- (void)updateRelationshipButton;
- (void)asyncGetAvatrImageIfNeed;
- (void)asyncRequestImage;
- (void)updateVerifiedLogoView;
- (void)autoLayoutWithTagButton:(id)a0;
- (void)layoutAvatarView;
- (void)layoutNameLabel;
- (void)layoutLineView;
- (void)layoutVerifiedIconView;
- (void)layoutRelationButton;
- (void)didEndLayoutRelationLine;
- (void)layoutDraftLabel;
- (void)beforeLayoutMessageLabel;
- (void)layoutMessageLabel;
- (void)layoutUnreadView;
- (long long)p_unreadViewHeight;
- (id)getMessageLabelTopRefreView;
- (double)getMessageLabelWidth;
- (id)getMessageLabelLeftRefreView;
- (double)getNameLabelWidth;
- (void)handleTapAvatarGes:(id)a0;
- (void)handleClickNamelabel:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setup;

@end
