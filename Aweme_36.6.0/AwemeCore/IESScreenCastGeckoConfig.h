@class NSString;

@interface IESScreenCastGeckoConfig : NSObject <BDBCGeckoConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)geckoAccessKey;
- (id)mainChannel;
- (id)appID;
- (id)bundle;
- (id)appVersion;
- (id)deviceID;
- (id)channels;

@end
