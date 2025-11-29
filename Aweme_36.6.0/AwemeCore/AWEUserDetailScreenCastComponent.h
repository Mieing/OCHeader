@class NSString;

@interface AWEUserDetailScreenCastComponent : AWEProfileBaseComponent <AWEScreenCastPendantDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pendantService;
- (id)castEnterFrom;
- (void)getInnerListArgsWith:(id /* block */)a0;
- (void)viewDidAppear;
- (void)viewDidDisappear;

@end
