@class UIImage, NSString;

@interface VideoMsgRecordViewModel : VideoMessageViewModel <MMImageLoaderObserver>

@property (retain, nonatomic) UIImage *urlImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)thumbImage;
- (unsigned int)thumbDownloadStatus;
- (id)thumbUrl;
- (BOOL)canPlayVideo;
- (id)cellViewClassName;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
