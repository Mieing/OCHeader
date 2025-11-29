@class NSString;

@interface LynxServiceCanvasImpl : NSObject <LynxServiceCanvasProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newCanvasManagerWithLynxContext:(id)a0;

@end
