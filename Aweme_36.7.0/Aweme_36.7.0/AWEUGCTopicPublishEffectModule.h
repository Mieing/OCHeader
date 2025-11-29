@class NSString, AWESearchUGCPageContext;

@interface AWEUGCTopicPublishEffectModule : NSObject <AWEUGCTopicModuleProtocol>

@property (retain, nonatomic) AWESearchUGCPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)cardViewTypeForAweme:(id)a0 isDoubleColumn:(BOOL)a1;
- (unsigned long long)cardDataTypeForAweme:(id)a0 isDoubleColumn:(BOOL)a1;
- (void)insertCardForOuterFlowWithContext:(id)a0;
- (void)insertCardForInnerFlowWithContext:(id)a0;
- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;

@end
