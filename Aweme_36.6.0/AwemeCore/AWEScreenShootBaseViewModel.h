@class NSString, NSDictionary, AWEAwemeModel, UIImage, DUXLoadingToast;

@interface AWEScreenShootBaseViewModel : NSObject

@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isFromDetailView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) UIImage *screenShootImage;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL canTap;
@property (nonatomic) BOOL shareNoQRCodeAndNoAwemeModelCheck;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)ScreenShootViewModel;
+ (id)ScreenShootViewModelWithShareNoQRCodeAndNoAwemeModelCheck:(BOOL)a0;

- (void)screenshotPanelDismiss;
- (void)trackClickWihtPlatform:(id)a0;
- (void)shareQQorWechat:(BOOL)a0;
- (void)shareWithPlatform:(long long)a0;
- (id)updateModelNameWithType:(unsigned long long)a0;
- (BOOL)needShow;
- (void).cxx_destruct;
- (id)init;
- (void)showLoading;

@end
