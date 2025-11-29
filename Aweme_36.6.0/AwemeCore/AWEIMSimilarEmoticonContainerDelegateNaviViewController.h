@class NSString;
@protocol AWEIMEmoticonDisplayViewControllerConfigProtocol;

@interface AWEIMSimilarEmoticonContainerDelegateNaviViewController : UINavigationController <AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) id<AWEIMEmoticonDisplayViewControllerConfigProtocol> context;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void).cxx_destruct;

@end
