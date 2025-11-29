@class NSString, AWEDynamicPatchModel;

@interface AWESearchAnnieXCardPrelayoutDelegate : NSObject <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) AWEDynamicPatchModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 onTemplateBundleReady:(id)a1;
- (void).cxx_destruct;

@end
