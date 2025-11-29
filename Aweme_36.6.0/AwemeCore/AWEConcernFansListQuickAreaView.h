@class NSString, NSDictionary, UIView, NSMutableArray;
@protocol BDXViewContainerProtocol;

@interface AWEConcernFansListQuickAreaView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (nonatomic) BOOL isLoadedLynx;
@property (nonatomic) BOOL isLynxRemoved;
@property (nonatomic) BOOL needUpdateDataAfterLoad;
@property (retain, nonatomic) NSDictionary *quickAccessInfo;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (copy, nonatomic) id /* block */ lynxViewSizeChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestDataWithBlock:(id /* block */)a0;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)unbindEvent;
- (void)bindEvent;
- (void)updateLynxData:(id)a0;
- (void)updateLynxViewSize;
- (void)removeLynxView;
- (void)subscribeEvent:(id)a0 withCallback:(id /* block */)a1;
- (void)resetLynxData;
- (void).cxx_destruct;
- (id)initWithWidth:(double)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
