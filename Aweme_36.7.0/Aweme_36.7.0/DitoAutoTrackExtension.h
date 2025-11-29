@class DitoPageContext, NSMutableDictionary, NSDictionary, DitoEvent, NSString;
@protocol DitoExtensionContainerProtocol;

@interface DitoAutoTrackExtension : NSObject <DitoExtensionProtocol>

@property (copy, nonatomic) NSDictionary *paramsInRouter;
@property (copy, nonatomic) NSDictionary *paramsInPageInfo;
@property (copy, nonatomic) NSDictionary *mergedParamsInPageInfoAndRouter;
@property (retain, nonatomic) NSMutableDictionary *hasTrackMap;
@property (retain, nonatomic) DitoEvent *quitPageEvent;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)bindStateAndAction;
- (void)didLoadPageModel:(id)a0;
- (void)componentViewWillShow:(id)a0;
- (void)componentViewDidCompleteShow:(id)a0;
- (void)initializeExtension;
- (id)mergeParams:(id)a0 withHigherPriorityParams:(id)a1;
- (void)postEndRequestEventWithPageInfo:(id)a0;
- (void)postEventWithViewModel:(id)a0 event:(id)a1;
- (id)keyForViewModel:(id)a0 inEventName:(id)a1;
- (void)postEventWithSender:(id)a0 event:(id)a1;
- (id)keyForPageTrackInEventName:(id)a0;
- (id)getEventNameFromActionContext:(id)a0;
- (id)getTrackParamsFromActionContext:(id)a0;
- (BOOL)canTrackWithActionContext:(id)a0 controlParams:(id)a1;
- (id)finalParamsWithActionParams:(id)a0;
- (void).cxx_destruct;
- (void)viewWillDisappear;

@end
