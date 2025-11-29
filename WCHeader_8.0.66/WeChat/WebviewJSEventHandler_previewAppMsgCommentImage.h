@interface WebviewJSEventHandler_previewAppMsgCommentImage : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (int)getCommentType:(id)a0;
- (void)launchBizImagePreviewPage:(struct LaunchBizImagePreviewInfo { void /* function */ **x0; int x1; int x2[3]; void *x3; unsigned int x4; struct RepeatedPtrField<biz::ImagePreviewIdentityInfo> { void **x0; int x1; int x2; int x3; } x5; unsigned int x6; struct RepeatedPtrField<biz::BizImagePreviewInfoItem> { void **x0; int x1; int x2; int x3; } x7; void *x8; struct BizImagePreviewReportInfo *x9; struct ImagePreviewInitialThumbCommentImageInfo *x10; })a0 previewCallback:(id /* block */)a1;
- (id)buildCallbackData:(id)a0;

@end
