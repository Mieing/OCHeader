@class NSString, AWEDynamicPatchModel;
@protocol AWESearchDynamicEngineProtocol;

@interface AWESearchWaterfallFeelGoodLynxView : AWESearchCachalotBaseCardView <AWESearchDynamicEngineDelegate>

@property (retain, nonatomic) AWEDynamicPatchModel *patchModel;
@property (retain, nonatomic) id<AWESearchDynamicEngineProtocol> engine;
@property (copy, nonatomic) id /* block */ clearInjectViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)p_updateLynxViewWithSearchModel:(id)a0;
- (void)clearFeelGoodLynxView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
