@class BrandLiveStatusButton, UILongPressGestureRecognizer, NSString, MMHeadImageView, BTReaderHeaderItemCellViewModel, UIImageView, BTReaderMsgSectionData, RichTextView, MMUILabel, MMUIButton, CContact;

@interface BTReaderHeaderItemCellView : BTBaseItemCellView <ILinkEventExt, WCActionSheetDelegate, BrandFinderLiveMgrExt>

@property (retain, nonatomic) MMHeadImageView *headerView;
@property (retain, nonatomic) RichTextView *nameLabel;
@property (retain, nonatomic) UIImageView *starView;
@property (retain, nonatomic) MMUIButton *moreBtn;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) BrandLiveStatusButton *liveButton;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL forceSetHighlight;
@property (readonly, nonatomic) CContact *contact;
@property (readonly, nonatomic) BTReaderHeaderItemCellViewModel *viewModel;
@property (weak, nonatomic) BTReaderMsgSectionData *sectionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (id)genMenuItems;
- (void)updateCellOnPageAppear;
- (void)initSubviews;
- (void)initGestureRecognizer;
- (void)initContentView;
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)initNameLabel;
- (void)initLiveView;
- (void)updateNameLabel;
- (void)updateStarView;
- (void)initMoreBtn;
- (void)initTimeLabel;
- (void)updateTimeLabel;
- (void)updateLiveView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)forceSetHighlight:(BOOL)a0;
- (void)layoutSubviews;
- (void)onClickLiveStatus;
- (void)onClickMoreBtn:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleLongPress:(id)a0;
- (void)onBrandLivingStatusChange:(id)a0 isLiving:(BOOL)a1 finderFeedExportId:(id)a2;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
