@interface MultiColumnReaderMessageViewModel : ReaderMessageViewModel

@property (nonatomic) BOOL forceHideRightCoverImage;
@property (readonly, nonatomic) double itemInsideWidth;
@property (readonly, nonatomic) double readerViewInsideWidth;
@property (readonly, nonatomic) double readerViewWidth;
@property (readonly, nonatomic) double readerItemLMargin;
@property (readonly, nonatomic) double readerLineLMargin;
@property (nonatomic) BOOL footerLabelHasClicked;
@property (nonatomic) BOOL isMuted;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)getMessageFTSText:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (double)measureScheduleContentViewHeight:(id)a0 originY:(double)a1;
- (BOOL)isShowReadAll;
- (BOOL)isReaderWrapWeappJumpType;
- (BOOL)isReaderWrapInvalidUrlJumpType;
- (BOOL)isReaderWrapScheduleJumpType;
- (BOOL)isNewPaymsgType;
- (double)itemKeyLabelMaxWidth;
- (BOOL)canShowRightCoverImage;
- (double)rightCoverImageWidth;
- (double)rightCoverImageHeight;
- (struct CGSize { double x0; double x1; })headerMenuSize;
- (BOOL)isShowHeadAndNicknameArea;
- (BOOL)isShowHeadImageAndNickname;
- (BOOL)getNewMsgRecvSwitch;
- (id)getNewMsgScopeItem;
- (BOOL)isOldSubscrMsg;
- (BOOL)shouldShowFooterView;
- (id)footerContentString;
- (id)footerLabelFont;
- (id)headerMenuImage;
- (id)muteSloganStr;
- (id)titleSloganForcePushStr;
- (id)muteSloganFont;
- (struct CGSize { double x0; double x1; })muteSloganSize;
- (BOOL)hasMoneyUnit:(id)a0;
- (double)messageNodeViewWidth;
- (double)messageNodeViewHeight;
- (id)makeSearchPreview:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (BOOL)isEcsKfCard;
- (id)bgBubbleInfo;
- (id)maskBubbleInfo;
- (BOOL)isSchedule;

@end
