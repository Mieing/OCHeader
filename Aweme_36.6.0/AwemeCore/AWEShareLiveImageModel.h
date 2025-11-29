@class NSArray, UIImage;

@interface AWEShareLiveImageModel : NSObject

@property (copy, nonatomic) NSArray *previewViews;
@property (nonatomic) struct CGSize { double width; double height; } previewViewSize;
@property (copy, nonatomic) NSArray *saveViews;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIImage *qrCodeImage;
@property (nonatomic) long long imageCount;
@property (nonatomic) BOOL shareImageLoadViewsSuccess;
@property (nonatomic) BOOL shareImageLoadQRCodeImageSuccess;
@property (nonatomic) BOOL shareImageLoadFailed;

- (void).cxx_destruct;

@end
