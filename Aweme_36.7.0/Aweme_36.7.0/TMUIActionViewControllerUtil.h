@class NSString, UIViewController;

@interface TMUIActionViewControllerUtil : NSObject <TMUIActionViewControllerService>

@property (copy, nonatomic) NSString *currentPageName;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (copy, nonatomic) NSString *lastPageName;
@property (copy, nonatomic) NSString *parentPageName;
@property (copy, nonatomic) NSString *presentingPageName;
@property (copy, nonatomic) NSString *presentedPageName;
@property (copy, nonatomic) NSString *currentPageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topViewControllerForController:(id)a0;
+ (id)extraInfoForViewController:(id)a0;
+ (id)parentViewControllerForViewController:(id)a0;
+ (id)removeQueryParamsWithURL:(id)a0;
+ (id)nearestViewControllerForView:(id)a0;
+ (id)sharedInstance;
+ (id)topViewController;

@end
