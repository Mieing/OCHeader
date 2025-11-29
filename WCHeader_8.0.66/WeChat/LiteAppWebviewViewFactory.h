@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface LiteAppWebviewViewFactory : NSObject <FlutterPlatformViewFactory> {
    NSObject<FlutterBinaryMessenger> *_messenger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
