@class NSString;
@protocol TTDownloadRequestProtocol;

@interface TTDownloadNetworkDelegate : NSObject <TTDownloadRequestProtocol>

@property (retain, nonatomic) id<TTDownloadRequestProtocol> customizedNetworkManager;
@property (retain, nonatomic) id<TTDownloadRequestProtocol> ttnetworkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)realNetManager;
- (id)getContentLengthWithModel:(id)a0;
- (void)tryDynamicThrottle:(id)a0 speed:(long long)a1 throttleSpeed:(long long)a2;
- (void)setNetworkLib:(id)a0;
- (id)getNetworkLib;
- (id)downloadRequestWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
