@class NSString;

@interface IESLiveCommonAnchorAlertServiceImpl : NSObject <IESLiveCommonAnchorAlertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showCommonAnchorAlertControllerWithTitle:(id)a0 message:(id)a1 headerImage:(id)a2 actionTitle:(id)a3 cancelTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;

@end
