@class TingShareListenItem, TingItem;

@interface AppTingMessageViewModel : CommonMessageViewModel

@property (nonatomic) double titleHeight;
@property (nonatomic) double detailHeight;
@property (readonly, nonatomic) TingShareListenItem *shareListenItem;
@property (readonly, nonatomic) TingItem *tingItem;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isFromShake;
- (id)finderUsername;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (void)OnMsgDownloadThumbFail:(id)a0 MsgWrap:(id)a1;
- (void)onMessageUploadThumbImageOK;
- (BOOL)hasReferImage;
- (id)getReferImage;

@end
