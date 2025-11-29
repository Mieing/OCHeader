@class ImageConf, NSString, NSArray;

@interface AppUrlImageMessageViewModel : CommonMessageViewModel

@property (retain, nonatomic) ImageConf *imageConf;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (nonatomic) int count;
@property (retain, nonatomic) NSString *duration;
@property (retain, nonatomic) NSString *subSource;
@property (nonatomic) double titlePanelHeight;
@property (retain, nonatomic) NSArray *titleRichTextStyles;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) double gradientViewHeight;
@property (nonatomic) double playBtnSize;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)sourceTitle;
- (double)getMediaHeight;
- (id)mediaImage;
- (BOOL)isPhotoType;
- (BOOL)isVedioType;
- (void).cxx_destruct;

@end
