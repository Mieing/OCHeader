@class NSString, NSDictionary;

@interface BDXBridgeAuthConfigFromGeckoDownload : NSObject <BDXBridgeAuthConfigDownload>

@property (copy, nonatomic) NSString *requestURLString;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
