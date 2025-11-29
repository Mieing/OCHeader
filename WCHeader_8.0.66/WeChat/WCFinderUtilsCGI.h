@class NSString, NSData;

@interface WCFinderUtilsCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long parseUtilType;
@property (copy, nonatomic) NSString *parseUrl;
@property (nonatomic) BOOL isLiveArticle;
@property (nonatomic) int cmdId;
@property (retain, nonatomic) NSData *cmdBuf;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ sucBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithUsername:(id)a0 parseUtilType:(unsigned long long)a1 parseUrl:(id)a2 liveArticile:(BOOL)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initWithUsername:(id)a0 cmdId:(int)a1 cmdBuf:(id)a2 lastBuffer:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
