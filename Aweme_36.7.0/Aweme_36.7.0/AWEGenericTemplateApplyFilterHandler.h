@class NSNumber;
@protocol ACCEditVideoFilterServiceProtocol;

@interface AWEGenericTemplateApplyFilterHandler : AWEGenericTemplateApplyBaseHandler

@property (weak, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (retain, nonatomic) NSNumber *isUseNewFilterNum;

- (void)onWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)onTemplateApply:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)onTemplateDidRemoveWithID:(id)a0 config:(id)a1 trackChangeInfo:(id)a2;
- (void).cxx_destruct;

@end
