@class NSString;

@interface FlutterCallbackInformation : NSObject

@property (copy) NSString *callbackName;
@property (copy) NSString *callbackClassName;
@property (copy) NSString *callbackLibraryPath;

- (void).cxx_destruct;

@end
