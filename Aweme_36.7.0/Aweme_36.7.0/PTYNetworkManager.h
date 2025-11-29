@protocol PTYNetworkProtocol;

@interface PTYNetworkManager : NSObject

@property (retain, nonatomic) id<PTYNetworkProtocol> network;

+ (void)request:(id)a0 method:(id)a1 headers:(id)a2 extraData:(id)a3 body:(id)a4 timeout:(double)a5 callback:(id /* block */)a6;
+ (void)download:(id)a0 headers:(id)a1 destPath:(id)a2 callback:(id /* block */)a3;
+ (void)cancelAllDownload;
+ (void)get:(id)a0 headers:(id)a1 extraData:(id)a2 callback:(id /* block */)a3;
+ (void)post:(id)a0 headers:(id)a1 extraData:(id)a2 body:(id)a3 callback:(id /* block */)a4;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;

@end
