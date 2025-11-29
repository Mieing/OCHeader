@class CContact, NSMutableArray;

@interface WANativeAppViewModel : WAAppMessageBaseViewModel {
    struct CGSize { double width; double height; } _viewSize;
    struct CGSize { double width; double height; } _titleSize;
    struct CGSize { double width; double height; } _digestSize;
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_digestLabelStyles;
}

@property (retain, nonatomic) CContact *appContact;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)onViewAppear;
- (id)additionalAccessibilityDescription;
- (id)getWAAppName;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })titleSize;
- (struct CGSize { double x0; double x1; })digestSize;
- (id)titleLabelStyles;
- (double)titleLeftMargin;
- (double)titleMaxWidth;
- (double)digestMaxWidth;
- (id)digestLabelStyles;
- (struct CGSize { double x0; double x1; })viewSize;
- (double)viewWidth;
- (id)titleStr;
- (id)digestStr;
- (id)titleFont;
- (id)digestFont;
- (unsigned int)titleMaxLines;
- (unsigned int)digestMaxLines;
- (double)thumWidth;
- (double)descWidth;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)sourceTag;
- (id)sourceIconUrlString;
- (unsigned int)thumbDownloadStatus;
- (id)thumbImage;
- (id)getReferImage;
- (void).cxx_destruct;

@end
