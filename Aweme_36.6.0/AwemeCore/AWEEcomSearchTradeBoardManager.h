@class NSMutableDictionary;

@interface AWEEcomSearchTradeBoardManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDict;

+ (id)shareInstance;

- (void)fetchTradeBoardURLWithEnterFrom:(id)a0 completion:(id /* block */)a1;
- (id)getContextWithEnterFrom:(id)a0;
- (id)validateEnterFrom:(id)a0;
- (id)parseResponse:(id)a0 error:(id)a1 enterFrom:(id)a2;
- (id)createContextWithLink:(id)a0;
- (void).cxx_destruct;

@end
