@protocol AFDBroadcastDataControllerProtocol;

@interface AWEMultiContentImpl.BroadcastContext : AWEPageContext <AFDBroadcastContextProtocol>

@property (nonatomic, retain) id<AFDBroadcastDataControllerProtocol> dataController;

- (void).cxx_destruct;
- (id)init;

@end
