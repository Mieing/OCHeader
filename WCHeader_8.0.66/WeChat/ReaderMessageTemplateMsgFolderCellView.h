@class MMUILabel, ReaderMessageTemplateMsgFolderViewModel, CAGradientLayer, BaseMessageCellView, UIView, NSString, ReaderMessageTemplateMsgHighlightButton;

@interface ReaderMessageTemplateMsgFolderCellView : BaseMessageCellView <ReaderMessageTemplateMsgFolderCellViewDelegate>

@property (retain, nonatomic) ReaderMessageTemplateMsgFolderViewModel *viewModel;
@property (retain, nonatomic) ReaderMessageTemplateMsgHighlightButton *hotSpotButton;
@property (retain, nonatomic) MMUILabel *collapsedCount;
@property (retain, nonatomic) CAGradientLayer *btnGradientLayer;
@property (retain, nonatomic) CAGradientLayer *countGradientLayer;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) MMUILabel *collapsedTitle;
@property (retain, nonatomic) CAGradientLayer *titleGradientLayer;
@property (retain, nonatomic) BaseMessageCellView *cellView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewModel:(id)a0;
- (void)onAppear;
- (void)setupContentView;
- (void)setDelegate:(id)a0;
- (void)layoutContentView;
- (void)updateCountLabel;
- (void)updateTitleLabel;
- (BOOL)canBeReused;
- (void)setNoClip;
- (void)updateStatus;
- (void)handleHotSpotButtonClicked;
- (BOOL)canCellShowOperationMenu;
- (void)onReaderTemplateMsgFoldCellView:(id)a0 actionType:(long long)a1;
- (void)onReaderTemplateMsgFoldCellView:(id)a0 opType:(unsigned int)a1 reportModel:(id)a2;
- (void)reportServerNotifySubscribeMessageOp:(unsigned int)a0 reportModel:(id)a1;
- (void)reportTemplateMsgFold:(long long)a0;
- (id)convertFoldMsgTitleListToStr:(id)a0;
- (BOOL)hasRepeatTitle;
- (void).cxx_destruct;

@end
