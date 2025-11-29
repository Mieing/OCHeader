@class IESECBlenderContext, NSDictionary, NSString, UIView;
@protocol IESECSliceXInstanceInterface;

@interface IESECBlenderBlockEngine : NSObject <IESECSliceXEventForwardDelegate, IESECBlenderContextProtocol>

@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (retain, nonatomic) NSDictionary *viewMap;
@property (retain, nonatomic) UIView *currentSliceRootView;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildCacheView;
- (void)destroyViewMap;
- (id)createViewWithDSL:(id)a0 name:(id)a1 version:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
