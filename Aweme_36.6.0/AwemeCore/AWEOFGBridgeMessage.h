@class NSString, NSDictionary, NSURL;

@interface AWEOFGBridgeMessage : NSObject

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *methodType;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSURL *invokeURL;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *sourceURL;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
