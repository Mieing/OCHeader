@class NSDictionary, NSString;

@interface AWEIMSpeedTestUploadVideoConfig : NSObject <AWEIMSpeedTestUploadVideoConfigProtocol>

@property (copy, nonatomic) NSDictionary *uploadConfig;
@property (copy, nonatomic) NSDictionary *requestParameter;
@property (copy, nonatomic) NSDictionary *authorizationParameter;
@property (copy, nonatomic) NSString *hostName;
@property (nonatomic) int threshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
