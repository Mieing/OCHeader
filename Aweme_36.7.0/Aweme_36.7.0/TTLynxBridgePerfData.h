@interface TTLynxBridgePerfData : NSObject

@property (nonatomic) double preDispatchTS;
@property (nonatomic) double preRegisterExecuteTS;
@property (nonatomic) double preCommandExecuteTS;
@property (nonatomic) double preCallbackTS;
@property (nonatomic) double postCallbackTS;

- (id)toDict;

@end
