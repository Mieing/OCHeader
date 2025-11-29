@class NSString, UIImageView, UIImage, UIView, DUXBottomNotification;
@protocol AWEUGSceneUndertakeSnackbarViewDelegate;

@interface AWEUGSceneUndertakeSnackbarView : UIView <AWEUGSceneUndertakeViewProtocol>

@property (nonatomic) long long snackbarStyle;
@property (retain, nonatomic) DUXBottomNotification *notif;
@property (retain, nonatomic) UIImage *leftIcon;
@property (nonatomic) BOOL imagePrepared;
@property (retain, nonatomic) UIView *leftContentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<AWEUGSceneUndertakeSnackbarViewDelegate> delegate;
@property (copy, nonatomic) NSString *snackbarButtonStyle;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) double buttonWidth;
@property (nonatomic) long long autoDismissTime;
@property (copy, nonatomic) NSString *actionScheme;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) unsigned long long leftContentType;
@property (nonatomic) unsigned long long notifType;
@property (copy, nonatomic) NSString *detailContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)downloadLeftIcon;
- (void)showBottomBanner;
- (void)prepareBottomBanner;
- (void)dismissBottomBanner:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
