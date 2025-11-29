@class UIImage, ImageScrollView, NSString;
@protocol SettingLastHeadImgViewControllerDelegate;

@interface SettingLastHeadImgViewController : MMUIViewController <ImageScrollViewDelegate>

@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) ImageScrollView *scrollView;
@property (weak, nonatomic) id<SettingLastHeadImgViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (void)initScrollViewAndImageView;
- (void)initButton;
- (void)viewDidLayoutSubviews;
- (void)use;
- (void)cancel;
- (void)operate;
- (void)onPhotoSave;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;

@end
