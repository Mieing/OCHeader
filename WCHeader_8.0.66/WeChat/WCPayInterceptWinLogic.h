@class NSString, InterceptWin, WCPayHalfPageSheet;

@interface WCPayInterceptWinLogic : NSObject <MMTipsViewControllerDelegate>

@property (retain, nonatomic) InterceptWin *interceptWin;
@property (retain, nonatomic) WCPayHalfPageSheet *halfPageSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleJumpItem:(id)a0 isPresent:(BOOL)a1 didClickBlock:(id /* block */)a2;
+ (void)handleJumpItem:(id)a0 didClickBlock:(id /* block */)a1;

- (BOOL)shouldHandleInterceptWin:(id)a0;
- (void)handleInterceptWin:(id)a0;
- (void)handleInterceptWin:(id)a0 didClickBlock:(id /* block */)a1;
- (void)handleInterceptWin:(id)a0 isPresent:(BOOL)a1 didClickBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
