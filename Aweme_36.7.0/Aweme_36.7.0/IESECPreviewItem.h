@class NSArray, UIImageView, UIImage, UIView, IESECHeadVideoModel, NSString;
@protocol IESECMediaPreviewResetVideoDelegate, IESECommerceKolVideoDataControllerProtocol, IESECVideoPlayerViewDelegate, IESECPDPVideoPlayerViewProtocol;

@interface IESECPreviewItem : NSObject

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSArray *urlList;
@property (retain, nonatomic) UIImage *placeholder;
@property (retain, nonatomic) UIImageView *placeholderView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL scaleToFillWidth;
@property (nonatomic) double whScale;
@property (nonatomic) BOOL scrollToTop;
@property (retain, nonatomic) UIView<IESECPDPVideoPlayerViewProtocol> *videoPlayerView;
@property (weak, nonatomic) id<IESECVideoPlayerViewDelegate> videoPlayerViewOriginDelegate;
@property (retain, nonatomic) IESECHeadVideoModel *videoModel;
@property (retain, nonatomic) UIView *videoPlayerOriginSuperView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoPlayerOriginRect;
@property (weak, nonatomic) id<IESECMediaPreviewResetVideoDelegate> videoResetDelegate;
@property (copy, nonatomic) NSString *findSameGoodsSchema;
@property (copy, nonatomic) NSString *findSameScreenShotSchema;
@property (copy, nonatomic) NSString *coverImageURI;
@property (retain, nonatomic) id<IESECommerceKolVideoDataControllerProtocol> videoDetailDataController;
@property (copy, nonatomic) NSString *titleLabel;

- (id)createBGImage;
- (id)getVideoPlayerViewInPreview;
- (void).cxx_destruct;

@end
