@class NSString;

@interface OrientationListener : NSObject <IOrientationListener> {
    long long lastDeviceOrientation;
    NSString *lastOrientation;
}

@property (retain) id observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startOrientationListener:(id /* block */)a0;
- (void)getOrientation:(id /* block */)a0;
- (id)getDeviceOrientation;
- (void)stopOrientationListener;
- (void).cxx_destruct;

@end
