@class FlutterEngine;

@interface FlutterLaunchEngine : NSObject {
    BOOL _didTakeEngine;
    FlutterEngine *_engine;
}

@property (readonly, nonatomic) FlutterEngine *engine;

- (id)init;
- (id)takeEngine;
- (void).cxx_destruct;

@end
