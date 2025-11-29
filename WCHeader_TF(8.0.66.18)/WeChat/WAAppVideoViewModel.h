@class NSString, CContact, UIImage, NSData;

@interface WAAppVideoViewModel : WAAppMessageBaseViewModel

@property (retain, nonatomic) CContact *appContact;
@property (readonly, nonatomic) NSString *videoPath;
@property (readonly, nonatomic) UIImage *thumbImage;
@property (readonly, nonatomic) NSData *thumbImageData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbImageSize;
@property (readonly, nonatomic) NSString *videoTitle;
@property (readonly, nonatomic) BOOL canShare;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)makeWeishiDemo;
- (BOOL)isShowSourceView;
- (BOOL)isTailPart;
- (BOOL)shouldShowSourceViewInContent;
- (id)cellViewClassName;
- (id)sourceIcon;
- (id)sourceTitle;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (void).cxx_destruct;

@end
