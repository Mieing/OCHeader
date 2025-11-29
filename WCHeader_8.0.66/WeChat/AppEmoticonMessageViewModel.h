@class NSString, CEmoticonWrap;

@interface AppEmoticonMessageViewModel : CommonMessageViewModel <IAPPEmoticonDownloadExt>

@property (readonly, nonatomic) CEmoticonWrap *emoticonWrap;
@property (readonly, nonatomic) BOOL isDownloaded;
@property (readonly, nonatomic) BOOL isDownloading;
@property (nonatomic) int iconType;
@property (nonatomic) double currentProgress;
@property (nonatomic) BOOL hasTryAutoDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityMessageType;
- (void)onAppEmoticonDownloading:(id)a0;
- (void)onAppEmoticonDownloadFinished:(id)a0;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;

@end
