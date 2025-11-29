@class NPGenericTemplateService_OC, NSArray, AWEGenericTemplateApplierContext, AWEGenericTemplatePreparation;
@protocol ACCEditServiceProtocol;

@interface AWEGenericTemplateApplier : NSObject

@property (retain, nonatomic) NPGenericTemplateService_OC *presetService;
@property (retain, nonatomic) AWEGenericTemplatePreparation *templatePreparation;
@property (copy, nonatomic) NSArray *handlers;
@property (retain, nonatomic) AWEGenericTemplateApplierContext *context;
@property (copy, nonatomic) NSArray *middlewares;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

- (void)applyGenericTemplateWithModel:(id)a0 config:(id)a1;
- (id)initWithContext:(id)a0 handlers:(id)a1 middleWares:(id)a2;
- (void)handleApplyGenericTemplateWithModel:(id)a0 config:(id)a1;
- (void)notifyTemplateIDWillRemove:(id)a0 config:(id)a1;
- (void)notifyTemplateIdDidRemove:(id)a0 config:(id)a1 trackChangeInfo:(id)a2;
- (void)notifyTemplateIDRemoved:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)notifyTemplateIdWillReplace:(id)a0;
- (void)notifyDidApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 trackChangeInfo:(id)a3 error:(id)a4;
- (void)handleDidApplyTemplateWithNLE:(id)a0 config:(id)a1 trackChangeInfo:(id)a2 templateModel:(id)a3;
- (void)notifyWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)handleDidApplyEffectWithTargetModel:(id)a0 config:(id)a1 trackChangeInfo:(id)a2 templateModel:(id)a3;
- (void)notifyTemplateDidFirstRender:(id)a0 config:(id)a1;
- (void)notifyTemplate:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)notifyTemplateDidSeekToStart:(id)a0 config:(id)a1;
- (id)removeGenericTemplateWithID:(id)a0 config:(id)a1;
- (void)updateGenericTemplateWithModel:(id)a0 config:(id)a1;
- (void).cxx_destruct;

@end
