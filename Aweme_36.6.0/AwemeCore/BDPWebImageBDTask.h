@class BDWebImageRequest, NSString;

@interface BDPWebImageBDTask : NSObject <BDPWebImageTask>

@property (retain, nonatomic) BDWebImageRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
