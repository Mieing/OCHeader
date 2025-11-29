@class NSMutableArray, NSString, WAWebViewController, NSDictionary, WAAppOpenParameter, WAAppTaskExtInfo, WAAppTaskHandlerWrapper;

@interface WAJSEventHandlerNavigateBackNativeContext : NSObject

@property (copy, nonatomic) NSString *appID;
@property (weak, nonatomic) WAWebViewController *webViewController;
@property (retain, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) WAAppOpenParameter *openParameter;
@property (retain, nonatomic) WAAppTaskExtInfo *taskInfo;
@property (retain, nonatomic) WAAppTaskHandlerWrapper *handlerWrapper;
@property (readonly, nonatomic) NSMutableArray *willJumpToMiniApp;
@property (readonly, nonatomic) NSMutableArray *prepareToMiniApp;
@property (readonly, nonatomic) NSMutableArray *beforeToMiniApp;

- (id)init;
- (void).cxx_destruct;

@end
