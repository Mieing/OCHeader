@class NSString;

@interface AWEStoryShootGuideViewController : AWEHalfScreenBaseViewController <AWEStoryShootGuideViewControllerProtocol>

@property (copy, nonatomic) id /* block */ afterDismissBlock;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;

@end
