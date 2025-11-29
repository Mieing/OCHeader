@class NSString;

@interface AWEEcomSearchPreRequestProvider : NSObject <AWESearchPreRequestProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefetchID;
+ (id)preRequestManagerWithObject:(id)a0;
+ (id)requestIdentifier:(id)a0;
+ (id)requestParamsContextWithObject:(id)a0;
+ (id)preNetworkRequestWithParamsContext:(id)a0 object:(id)a1;


@end
