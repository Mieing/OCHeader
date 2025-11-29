@class NSString, BDWebImageRequest;

@interface FlowWebImageRequest : NSObject

@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *originURLString;
@property (retain, nonatomic) BDWebImageRequest *request;

- (void).cxx_destruct;
- (void)cancel;

@end
