@interface WCPayTemplateSearchViewModel : ReaderMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)getMessageFTSText:(id)a0;
+ (void)addValueForFTS:(id)a0 value:(id)a1;
+ (id)makeHighlightedLabel:(id)a0 previewInfo:(id)a1 color:(id)a2;

- (id)cellViewClassName;
- (id)makeSearchPreview:(id)a0;
- (id)timeToStr:(id)a0;

@end
