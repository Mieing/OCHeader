@class FlowIMCameraTabConfigModel;

@interface FlowIMCameraTabConfigMap : NSObject

@property (nonatomic, retain) FlowIMCameraTabConfigModel *allCameraConfig;
@property (nonatomic, retain) FlowIMCameraTabConfigModel *generalConfig;
@property (nonatomic, retain) FlowIMCameraTabConfigModel *imageAnswerActionBarConfig;
@property (nonatomic, retain) FlowIMCameraTabConfigModel *inputLeftConfig;

- (void).cxx_destruct;
- (id)init;

@end
