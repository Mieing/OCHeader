@class NSString, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEClientAIUIHelper : NSObject <AWEClientAIUIHelper>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *hotFeedTabItemVC;
@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> *hotFeedTableVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAsyncWaitMainQueue;
+ (long long)asyncWaitMainQueueTimeMs;
+ (void)executeOnMainQueueWithBlock:(id /* block */)a0;

@end
