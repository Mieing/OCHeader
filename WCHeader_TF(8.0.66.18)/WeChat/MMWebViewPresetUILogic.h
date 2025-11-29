@class NSDictionary, NSMutableDictionary;
@protocol MMWebViewPresetUILogicDelegate;

@interface MMWebViewPresetUILogic : NSObject

@property (retain, nonatomic) NSMutableDictionary *functionHandlers;
@property (retain, nonatomic) NSDictionary *functions;
@property (weak, nonatomic) id<MMWebViewPresetUILogicDelegate> delegate;

- (id)init;
- (void)handlePresetUIConfigs:(id)a0 permissionList:(id)a1;
- (id)handlerForFunction:(id)a0;
- (void).cxx_destruct;

@end
