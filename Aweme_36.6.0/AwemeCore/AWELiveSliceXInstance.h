@class NSString;
@protocol IESLiveSliceXEventForwardDelegate, IESECSliceXInstanceInterface;

@interface AWELiveSliceXInstance : NSObject <IESLiveSliceXInstanceInterface, IESECSliceXEventForwardDelegate>

@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (weak, nonatomic) id<IESLiveSliceXEventForwardDelegate> eventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (id)initWithbizIdentify:(id)a0 context:(id)a1;
- (struct CGSize { double x0; double x1; })bindSliceXView:(id)a0 jsonData:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)createSliceXViewWithSyncTemplateName:(id)a0 version:(id)a1 jsonDict:(id)a2 error:(id *)a3;
- (void)createSliceXViewWithAsyncTemplateName:(id)a0 version:(id)a1 url:(id)a2 complete:(id /* block */)a3;
- (id)getTrackValue:(id)a0 diContext:(id)a1;
- (void).cxx_destruct;

@end
