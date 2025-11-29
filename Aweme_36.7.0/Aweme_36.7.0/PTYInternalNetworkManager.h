@class NSString;

@interface PTYInternalNetworkManager : NSObject <PTYNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)request:(id)a0 method:(id)a1 headers:(id)a2 extraData:(id)a3 body:(id)a4 timeout:(double)a5 callback:(id /* block */)a6;
- (void)download:(id)a0 headers:(id)a1 destPath:(id)a2 callback:(id /* block */)a3;
- (void)cancelAllDownload;

@end
