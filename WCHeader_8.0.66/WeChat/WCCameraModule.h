@class NSObject;
@protocol WCCameraModuleDelegate;

@interface WCCameraModule : MMObject

@property (nonatomic) long long scene;
@property (weak, nonatomic) id<WCCameraModuleDelegate> delegate;
@property (retain, nonatomic) NSObject *userData;

- (void).cxx_destruct;

@end
