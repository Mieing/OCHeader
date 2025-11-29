@class NSString;

@interface IESAdLandingChannelInterceptor : NSObject <IESFalconCustomInterceptor>

@property (copy, nonatomic) NSString *gurdAccessKey;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *channelQueryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)falconMetaDataForURLRequest:(id)a0;
- (id)initWithGurdAccessKey:(id)a0;
- (id)adLandingChannelForURLRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
