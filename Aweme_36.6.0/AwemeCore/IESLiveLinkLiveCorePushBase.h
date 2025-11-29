@class NSString, NSDictionary;

@interface IESLiveLinkLiveCorePushBase : NSObject

@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) long long scene;
@property (nonatomic) long long videoCaptureHeight;
@property (nonatomic) long long videoCaptureWidth;
@property (copy, nonatomic) NSDictionary *mixOnClient;

- (void).cxx_destruct;

@end
