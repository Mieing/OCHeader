@class UIView, WCFinderFittingWidthRichView, MMWebImageView, WCFinderEventMiniTaskView, NSString, UIImageView, FinderEventInfo, WCFinderHeadImageView, MMUIButton, UILabel;
@protocol WCFinderEventHeaderViewDelegate;

@interface WCFinderEventHeaderView : UICollectionReusableView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, ILinkEventExt, WCFinderEventMiniTaskViewDelegate>

@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (retain, nonatomic) UIView *initiatorView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderFittingWidthRichView *sizeableDescTextView;
@property (retain, nonatomic) MMUIButton *rightArrowButton;
@property (retain, nonatomic) UILabel *timeTipsLabel;
@property (retain, nonatomic) UIView *descriptionContactleadLine;
@property (retain, nonatomic) UIView *descriptionContactView;
@property (retain, nonatomic) WCFinderHeadImageView *descriptionContactImageView;
@property (retain, nonatomic) UILabel *descriptionContactLabel;
@property (retain, nonatomic) UIView *miniAppView;
@property (retain, nonatomic) MMWebImageView *miniAppIconView;
@property (retain, nonatomic) UILabel *miniAppNameLabel;
@property (retain, nonatomic) UIImageView *rightArrowIconView;
@property (retain, nonatomic) UILabel *memberNumTipsLabel;
@property (retain, nonatomic) MMUIButton *joinButton;
@property (retain, nonatomic) WCFinderEventMiniTaskView *miniTaskContainer;
@property (weak, nonatomic) id<WCFinderEventHeaderViewDelegate> delegate;
@property (nonatomic) BOOL hiddenNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithEventInfo:(id)a0 andViewWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })joinButtonSizeWithEventInfo:(id)a0;
+ (id)getDescriptionWithEventInfo:(id)a0;
+ (BOOL)shouldShowExpiredTimeWithEventInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)updateWithEventInfo:(id)a0 showJoinButton:(BOOL)a1;
- (void)updateJoinButtonWithEventInfo:(id)a0;
- (id)getMemberNumberTextWithEventInfo:(id)a0;
- (void)setToNormalMode;
- (BOOL)hasShowMoreDescriptionButton;
- (BOOL)hasShowDescriptionContact;
- (BOOL)hasShowJoinButton;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)eventMiniTaskEntranceDidClick;
- (void)onClickAuthorInfoAction;
- (void)displayMoreDescription;
- (void)onClickDescriptionContactAction;
- (void)joinButtonClicked;
- (void)openEventMiniApp;
- (void).cxx_destruct;

@end
