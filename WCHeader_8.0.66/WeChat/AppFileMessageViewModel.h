@class NSString;

@interface AppFileMessageViewModel : CommonMessageViewModel <MessageDownloadable>

@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) BOOL isFileExist;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (BOOL)useNewBubble;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (int)revokeTimeLimitInSecond;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadAppAttachExpired;
- (void)onMessageDownloadAppAttachFail;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (BOOL)contentExists;

@end
