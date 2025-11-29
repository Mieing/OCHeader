@class NSString, NSMutableArray, AWESearchDecoratorManagerContext;

@interface AWESearchDecoratorPublishProgressViewModule : NSObject <AWESearchDecoratorModuleProtocol>

@property (retain, nonatomic) AWESearchDecoratorManagerContext *managerContext;
@property (retain, nonatomic) NSMutableArray *progressViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearAllProgressView;
- (void)createProgressViewWithContext:(id)a0;
- (BOOL)isUIViewControllerBindedProgressView:(id)a0;
- (void)updateWithManagerContext:(id)a0;
- (void)onDecoratorModuleRemoved;
- (void).cxx_destruct;

@end
