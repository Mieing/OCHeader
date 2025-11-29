@class WANavigateLogicController, NSString;

@interface WAJSEventHandler_openMapApp : WAJSEventHandler_BaseEvent <WANavigateLogicControllerDelegate>

@property (retain, nonatomic) WANavigateLogicController *navLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
