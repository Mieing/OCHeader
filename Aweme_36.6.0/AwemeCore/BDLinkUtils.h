@class NSCache;

@interface BDLinkUtils : NSObject

@property (retain, nonatomic) NSCache *requestBodyCache;

- (id)initWithContextId:(id)a0;
- (id)requestWithUrl:(id)a0 urlSession:(id)a1 andParameter:(id)a2 cacheBodyData:(BOOL)a3 andTimeout:(double)a4 andCallback:(id /* block */)a5;
- (void)pingWithUrl:(id)a0 urlSession:(id)a1 andTimeout:(double)a2 completion:(id /* block */)a3;
- (id)requestWithUrl:(id)a0 urlSession:(id)a1 andParameter:(id)a2 cacheBodyData:(BOOL)a3 andTimeout:(double)a4 andDeviceName:(id)a5 andCallback:(id /* block */)a6;
- (id)getBodyDataForKey:(id)a0;
- (void)setBodyData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
