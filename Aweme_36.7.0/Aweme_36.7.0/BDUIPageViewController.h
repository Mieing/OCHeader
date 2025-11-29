@class NSString;
@protocol BDUIPageViewControllerDelegate;

@interface BDUIPageViewController : UIPageViewController <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<BDUIPageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enableFixPageCurlCrash;

@end
