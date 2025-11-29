@class UIImageView, NSString;

@interface AWENearbyIconGuideViewController : UIViewController <AWENearbyGuideViewControllerProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL notShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowOnView;

- (void)showOnView:(id)a0;
- (void)__configUI;
- (void)__clickPlusIcon;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
