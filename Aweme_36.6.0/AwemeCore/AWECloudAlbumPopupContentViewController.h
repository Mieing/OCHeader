@class NSString, UIView;
@protocol AWECloudAlbumPopupContentViewProtocol, AWECloudAlbumPopupVCProtocol;

@interface AWECloudAlbumPopupContentViewController : UIViewController <AWECloudAlbumPopupContentVCProtocol>

@property (retain, nonatomic) UIView<AWECloudAlbumPopupContentViewProtocol> *contentView;
@property (weak, nonatomic) id<AWECloudAlbumPopupVCProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancleAction;
- (id)initWithPopupContentView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)contentViewHeight;

@end
