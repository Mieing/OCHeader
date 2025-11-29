@class MMHeadImageView, MMUIImageView, MMExpandImageView, TextStateModel, MMUIButton, MMUILabel;
@protocol WCStatusViewDelegate;

@interface TextStateHeaderSectionView : TextStateSectionView

@property (retain, nonatomic) MMUIButton *contactButton;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nicknameLabel;
@property (retain, nonatomic) MMUILabel *shortTimeLabel;
@property (retain, nonatomic) MMUIButton *operateButton;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) MMUIImageView *liveImageView;
@property (retain, nonatomic) MMExpandImageView *privacyImageView;
@property (weak, nonatomic) id<WCStatusViewDelegate> statusViewDelegate;
@property (copy, nonatomic) id /* block */ moreButtonHandler;
@property (copy, nonatomic) id /* block */ contactButtonHandler;
@property (retain, nonatomic) TextStateModel *textState;
@property (copy, nonatomic) id /* block */ operateButtonHandler;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL shouldShowLocationDistance;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;

+ (id)standardMoreButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)addMoreButtonWithHandler:(id /* block */)a0;
- (void)addMoreButton:(id)a0 withHandler:(id /* block */)a1;
- (void)removeMoreButton;
- (BOOL)hasMoreButton;
- (void)updateSubview;
- (void)updateLayout;
- (BOOL)hasOperateButton;
- (void)updateData;
- (void)updateLive;
- (void)updateTimeAndLocation;
- (void)updateContact;
- (void)updatePrivacyView;
- (void)imageViewTapped:(id)a0;
- (void)updateVoiceOver;
- (void)onTapContactButton;
- (void)onTapMoreButton;
- (void).cxx_destruct;

@end
