@class NSString;

@interface AWELiveWalletHostInjectServiceImpl : NSObject <IESLiveWalletHostInjectService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createEmptyViewWithEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 tapAction:(id /* block */)a1 resolveAction:(id /* block */)a2;

@end
