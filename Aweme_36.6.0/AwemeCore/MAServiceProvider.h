@class NSString, AMapFoundationServiceProvider;

@interface MAServiceProvider : NSObject {
    AMapFoundationServiceProvider *_foundationServiceProvider;
}

@property (copy, nonatomic) NSString *baseMapServerAddress;
@property (copy, nonatomic) NSString *restIndoorServerAddress;
@property (readonly, nonatomic) NSString *worldMapGridServerAddress;
@property (readonly, nonatomic) NSString *worldMapGridServerAddressIPV6;
@property (copy, nonatomic) NSString *enInlandGridServerAddress;
@property (copy, nonatomic) NSString *enInlandGridServerAddressIPV6;
@property (copy, nonatomic) NSString *traceKey;
@property (readonly, nonatomic) NSString *traceServerAddressV4;
@property (readonly, nonatomic) NSString *traceServerAddressV4IPV6;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
