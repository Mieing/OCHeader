@class AWESharkContainerLoadContext, NSString, UIView;
@protocol AWESharkLynxContainerProtocol;

@interface AWETransformerLynxElement : AWETransformerSingleElement <AWESharkLynxContainerViewDelegate, AWESharkCardProtocol>

@property (retain, nonatomic) UIView<AWESharkLynxContainerProtocol> *lynxView;
@property (nonatomic) BOOL needHandleShowEventWhenLoaded;
@property (nonatomic) BOOL isSuccessedLoad;
@property (nonatomic) BOOL isFailLoad;
@property (retain, nonatomic) AWESharkContainerLoadContext *loadCtx;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *initialDataJSON;
@property (copy, nonatomic) NSString *cardID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) BOOL isReuse;
@property (readonly, nonatomic) long long renderType;

+ (id)elementType;

- (double)originHeight;
- (void)elementDidAppear;
- (void)lynxContainerDidFirstScreen:(id)a0;
- (void)lynxContainer:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxContainer:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)lynxContainerDidUpdate:(id)a0;
- (void)lynxContainerOnSetupLynxInfo:(id)a0 bulletInfo:(id)a1;
- (void)lynxContainerOnUpdateLynxInfo:(id)a0 bulletInfo:(id)a1;
- (void)sendLynxEvent:(id)a0 params:(id)a1;
- (void)lynxWillShow;
- (void)lynxWillHide;
- (void)reportShowEvent;
- (void)loadViewWithCache:(id)a0 delegate:(id)a1;
- (void)renderElement;
- (void)elementWillDisappear;
- (void)updateWithNewElement:(id)a0;
- (long long)pageTypeForFMPTrack;
- (void)__updateLynxElement;
- (void)reportFailEvent;
- (void)reloadCardWithData:(id)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
