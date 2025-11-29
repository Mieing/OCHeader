@class NSString;

@interface AWETeenLandscapeSingleVideoViewController : AWETeenLandscapeFeedBaseViewController <AWETeenCustomDisplayViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)p_layoutViews;
- (void)interactionExitLandscapeClicked;
- (void)landscapeBackBtnClicked;
- (void)viewDidLoad;

@end
