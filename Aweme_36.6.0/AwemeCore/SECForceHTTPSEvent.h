@class NSString;

@interface SECForceHTTPSEvent : NSObject

@property (copy, nonatomic) NSString *currentURLString;
@property (copy, nonatomic) NSString *containerClass;
@property (copy, nonatomic) NSString *webViewClass;
@property (copy, nonatomic) NSString *requestURLString;
@property (copy, nonatomic) NSString *requestMethod;
@property (copy, nonatomic) NSString *action;

- (void).cxx_destruct;

@end
