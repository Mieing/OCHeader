@class UIImageView, UILabel;

@interface AWEQRCodeLandscapeShareGuideView : UIView

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *saveImageView;
@property (retain, nonatomic) UIImageView *openAppImageView;
@property (retain, nonatomic) UILabel *saveImageLabel;
@property (retain, nonatomic) UILabel *openAppLabel;
@property (readonly, nonatomic) BOOL forSaveImage;

+ (Class)aAWESharePrepareURLStageCommonAdapterClass;

- (id)aAWESharePrepareURLStageCommonAdapter;
- (id)initForSaveImage:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
