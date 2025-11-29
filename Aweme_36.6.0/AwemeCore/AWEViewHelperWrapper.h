@class NSString, AFDModalViewHelper;

@interface AWEViewHelperWrapper : NSObject <AWECloudAlbumPopupViewControllerHelper>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTransitionController:(id)a0 contentHeight:(double)a1 cornerRadius:(double)a2;
- (void)updateContentHeight:(double)a0 viewController:(id)a1;
- (void)setupTransitionController:(id)a0 contentHeight:(double)a1 cornerRadius:(double)a2 disablePanGes:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
