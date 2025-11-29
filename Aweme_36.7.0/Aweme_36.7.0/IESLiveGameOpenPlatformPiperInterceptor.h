@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_group;

@interface IESLiveGameOpenPlatformPiperInterceptor : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSDictionary *openCapabilityList;
@property (copy, nonatomic) NSDictionary *openCapabilityAuthList;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;

- (long long)_tryInvokingOpenCapabilityMethod:(id)a0;
- (void)trackAuthEvent:(id)a0;
- (void)reqeustAuthForScope:(id)a0 authType:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
