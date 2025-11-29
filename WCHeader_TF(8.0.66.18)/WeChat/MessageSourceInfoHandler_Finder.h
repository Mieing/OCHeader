@interface MessageSourceInfoHandler_Finder : CommonMessageSourceInfoHandler

+ (BOOL)canCreateWithMsgWrap:(id)a0;

- (id)sourceIcon:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
- (id)sourceTitle;
- (BOOL)canClick;
- (void)handleClickWithViewController:(id)a0;
- (void)sourceInfoViewReportWithEventID:(id)a0;

@end
