@class NSString, AWESharkContainerLoadContext, NSDictionary, UIView, _TtC8TempoiOS13TempoRootView;
@protocol AWESharkLynxContainerProtocol;

@interface AWETransformerTempoElement : AWETransformerSingleElement <AWESharkCardProtocol>

@property (retain, nonatomic) UIView *tempoContainer;
@property (nonatomic) BOOL reuse;
@property (retain, nonatomic) _TtC8TempoiOS13TempoRootView *rootView;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *initialDataJSON;
@property (retain, nonatomic) AWESharkContainerLoadContext *loadCtx;
@property (nonatomic) BOOL elementAppear;
@property (nonatomic) BOOL needHandleShowEventWhenLoaded;
@property (nonatomic) BOOL isSuccessedLoad;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSDictionary *tempoData;
@property (readonly, nonatomic) UIView *tempoView;
@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) BOOL isReuse;
@property (readonly, nonatomic) long long renderType;
@property (readonly, nonatomic) UIView<AWESharkLynxContainerProtocol> *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementType;

- (id)findViewWithName:(id)a0;
- (double)originHeight;
- (void)elementDidAppear;
- (void)sendTempoEvent:(id)a0 params:(id)a1;
- (void)reportShowEvent;
- (void)loadViewWithCache:(id)a0 delegate:(id)a1;
- (void)renderElement;
- (void)elementWillDisappear;
- (long long)pageTypeForFMPTrack;
- (void)reloadCardWithData:(id)a0;
- (void)didFetchTempoView:(id)a0 reuse:(BOOL)a1;
- (void)fetchTempoViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
