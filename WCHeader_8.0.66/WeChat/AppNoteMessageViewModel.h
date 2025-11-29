@class NSString;

@interface AppNoteMessageViewModel : AppStandardTextContentMessageViewModel

@property (retain, nonatomic) NSString *parsedTitle;
@property (retain, nonatomic) NSString *parsedContent;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)title;
- (id)contentText;
- (unsigned long long)contentImgCnt;
- (id)additionalAccessibilityDescription;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (void).cxx_destruct;

@end
