@class NSArray, UIImageView, UIImage, NSString;
@protocol AWEEcomScreenShotPanelActionDelegate;

@interface AWEEcomScreenShotPanelView : UIView <AWEEcomScreenShotPanelButtonDelegate, AWESearchInlayScrollPanelScreenShotViewProtocol>

@property (copy, nonatomic) NSArray *buttonKeys;
@property (copy, nonatomic) NSArray *buttonViews;
@property (retain, nonatomic) UIImage *screenShotImage;
@property (retain, nonatomic) UIImageView *screenShotImageView;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchEntrance;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (weak, nonatomic) id<AWEEcomScreenShotPanelActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)buttonTypeFromKey:(id)a0;
+ (id)buttonKeyFromType:(unsigned long long)a0;

- (void)configUI;
- (void)ecomScreenShotPanelButtonClickWithButtonType:(unsigned long long)a0 needCloseResultVC:(BOOL)a1 completion:(id /* block */)a2;
- (void)triggerAnimationForShareButton;
- (id)initWithImage:(id)a0 searchInfoDict:(id)a1;
- (void)filterInvalidButtons;
- (double)getImageViewHeight;
- (void)configButtons;
- (void)ecomScreenShotPanelButtonShowWithButtonType:(unsigned long long)a0;
- (void)updateImageWithFilePath:(id)a0;
- (id)initWithFilePath:(id)a0 searchInfoDict:(id)a1;
- (void).cxx_destruct;

@end
