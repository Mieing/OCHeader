@class IESECGoodsDetailHeaderServiceProvider, NSMutableDictionary, IESECLLDCLynxManager, IESECGoodsDetailHeaderSliceEventHandler, NSString, IESECPdpHeaderSliceEventHandler;
@protocol IESECSliceXInstanceInterface;

@interface IESECGoodsDetailHeaderViewManager : NSObject <IESECGoodsDetailHeaderViewManagerServeice>

@property (retain, nonatomic) NSMutableDictionary *sliceViewMap;
@property (retain, nonatomic) NSMutableDictionary *sliceModelMap;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (nonatomic) struct CGSize { double width; double height; } footerSize;
@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceInstance;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceEventHandler *sliceXEventHandler;
@property (retain, nonatomic) IESECPdpHeaderSliceEventHandler *headerSliceEventHandler;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPageVC:(id)a0;
- (id)getSliceViewWithSlice:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1;
- (id)getSliceViewWithSlice:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 skipBind:(BOOL)a2;
- (id)getSliceViewWithSlice:(id)a0;
- (void)triggerAction:(id)a0;
- (void)triggerPdpAction:(id)a0;
- (id)getLynxCardWithURL:(id)a0 data:(id)a1;
- (id)initWithContext:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;

@end
