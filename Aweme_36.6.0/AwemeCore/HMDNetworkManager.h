@class NSString;
@protocol HMDNetworkProtocol;

@interface HMDNetworkManager : NSObject <HMDNetworkProtocol>

@property (retain, nonatomic) id<HMDNetworkProtocol> ttnetManager;
@property (retain, nonatomic) id<HMDNetworkProtocol> urlsessionManager;
@property (retain) id<HMDNetworkProtocol> customManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)asyncRequestWithModel:(id)a0 callBackWithResponse:(id /* block */)a1;
- (void)uploadWithModel:(id)a0 callBackWithResponse:(id /* block */)a1;
- (void)asyncRequestWithModel:(id)a0 callback:(id /* block */)a1;
- (BOOL)useCustomNetworkManager;
- (id)validManager;
- (void)handleRequestModel:(id)a0;
- (void)logMemoryWithModel:(id)a0;
- (void)setCustomNetworkManager:(id)a0;
- (void)uploadWithModel:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
