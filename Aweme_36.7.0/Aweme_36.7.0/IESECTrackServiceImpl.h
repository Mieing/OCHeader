@class NSString;

@interface IESECTrackServiceImpl : NSObject <IESECTrackService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (id)searchBcmChainString;


@end
