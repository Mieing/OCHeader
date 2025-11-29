@class NSString;

@interface AWEAdCommentLeaveAlertDialog : NSObject <AWEAdCommentLeaveAlertDialog>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackWithAweme:(id)a0 label:(id)a1 refer:(id)a2;
+ (void)showAlertWithAweme:(id)a0 actionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;


@end
