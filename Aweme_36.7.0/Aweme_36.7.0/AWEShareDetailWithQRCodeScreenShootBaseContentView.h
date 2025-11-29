@class NSString, UIImageView, UIImage, AWEShareContext;

@interface AWEShareDetailWithQRCodeScreenShootBaseContentView : AWEShareDetailWithQRCodeBaseContentView <AWEShareDetailWithQRCodeScreenShootContentViewProtocol>

@property (retain, nonatomic) AWEShareContext *context;
@property (retain, nonatomic) UIImage *fakeQRImage;
@property (nonatomic) BOOL useWarmColorBg;
@property (retain, nonatomic) UIImageView *QRCodeImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
