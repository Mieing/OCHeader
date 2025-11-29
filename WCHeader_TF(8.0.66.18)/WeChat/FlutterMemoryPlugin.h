@class FlutterMemoryHost, NSString;

@interface FlutterMemoryPlugin : NSObject <MMFlutterPlugin>

@property (retain, nonatomic) FlutterMemoryHost *memoryHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
