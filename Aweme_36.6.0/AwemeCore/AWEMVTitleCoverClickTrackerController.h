@class NSString;

@interface AWEMVTitleCoverClickTrackerController : AWEDCFeedBaseController <AWEMVEventDispatchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (id)mediumVideoCoverTitleCommonParamsWithModel:(id)a0 context:(id)a1;
- (BOOL)isValidCell:(id)a0;
- (void)handleTitleElementClickedActionTypeWithSender:(id)a0 params:(id)a1 sectionViewModel:(id)a2;
- (void)handleImageElementClickedActionTypeWithSender:(id)a0 params:(id)a1 sectionViewModel:(id)a2;
- (void)trackTitleClickWithCell:(id)a0;
- (void)trackCoverClickWithCell:(id)a0;

@end
