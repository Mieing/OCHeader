@class NSString, MMUIViewController, NSMutableDictionary, NSDictionary;
@protocol WXCustomWebViewControllerProtocol;

@interface GCWebViewCustomEventParam : NSObject

@property (retain, nonatomic) MMUIViewController<WXCustomWebViewControllerProtocol> *webVc;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSMutableDictionary *customParam;
@property (retain, nonatomic) NSDictionary *jsParam;

- (void).cxx_destruct;

@end
