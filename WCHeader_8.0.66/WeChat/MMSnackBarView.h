@class MMSnackBarConfig, MMUIActivityIndicatorView, UIImageView, UIViewController, UIView, MMUILabel;
@protocol MMSnackBarViewDelegate;

@interface MMSnackBarView : UIView

@property (retain, nonatomic) MMSnackBarConfig *config;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *actionLabel;
@property (retain, nonatomic) UIImageView *actionImageView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicator;
@property (retain, nonatomic) UIView *actionView;
@property (weak, nonatomic) id<MMSnackBarViewDelegate> delegate;
@property (weak, nonatomic) UIViewController *currentVC;

- (id)init;
- (BOOL)accessibilityActivate;
- (void)dealloc;
- (void)initView;
- (id)multiLineStatics:(BOOL)a0;
- (void)applyLayout;
- (void)createOrUpdateLayout;
- (void)addNotification;
- (void)removeNotification;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onOperation;
- (void).cxx_destruct;

@end
