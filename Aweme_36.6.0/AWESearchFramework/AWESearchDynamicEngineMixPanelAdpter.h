@class NSString, AWESearchDynamicEngine;

@interface AWESearchDynamicEngineMixPanelAdpter : NSObject <AWEMixSelectChaptersListDelegate>

@property (weak, nonatomic) AWESearchDynamicEngine *lynxEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mixPanelListGetProgressWillMove:(double)a0;
- (void)mixPanelListDidCancel;
- (void)mixPanelListWillClose;
- (id)initWithLynxEngine:(id)a0;
- (void).cxx_destruct;

@end
