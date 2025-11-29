@class NSString, AWESearchDynamicEngine;

@interface AWESearchDynamicContainerView : UIView <AWESearchDynamicEngineDelegate, AWESearchDynamicContainerViewProtocol>

@property (retain, nonatomic) AWESearchDynamicEngine *lynxEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateModel:(id)a0;

@end
