@class NSString;
@protocol AWEEnterpriseIMLynxReuseDelegateObjectDelegate;

@interface AWEEnterpriseIMLynxReuseDelegateObject : NSObject <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) id<AWEEnterpriseIMLynxReuseDelegateObjectDelegate> delegate;
@property (copy, nonatomic) NSString *messageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)handleLynxViewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
