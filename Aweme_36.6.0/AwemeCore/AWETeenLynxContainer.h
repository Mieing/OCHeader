@class NSString, UIView, UILabel, BDXLynxKitParams;
@protocol BDXKitViewLifecycleProtocol, BDXLynxViewProtocol;

@interface AWETeenLynxContainer : UIView <BDXKitViewLifecycleProtocol>

@property (retain, nonatomic) BDXLynxKitParams *params;
@property (retain, nonatomic) UIView<BDXLynxViewProtocol> *lynxView;
@property (copy, nonatomic) NSString *surl;
@property (retain, nonatomic) UILabel *resourceLabel;
@property (weak, nonatomic) id<BDXKitViewLifecycleProtocol> lynxViewLifecycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorSuccess;
+ (void)monitorFailWithError:(id)a0 nativeBackup:(BOOL)a1;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateGlobalPropsWithDictionary:(id)a0;
- (void)view:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (id)generateGlobalProps;
- (void)loadWithData:(id)a0;
- (id)initWithSurl:(id)a0;
- (void)loadWithData:(id)a0 needReload:(BOOL)a1;
- (id)generateLynxParams;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
