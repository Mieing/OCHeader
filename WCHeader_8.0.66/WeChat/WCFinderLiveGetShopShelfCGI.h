@class NSData, NSString;

@interface WCFinderLiveGetShopShelfCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int pullScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *stockId;
@property (nonatomic) unsigned long long version;

+ (void)onGetResponse:(id)a0 forTaskId:(id)a1;

- (id)initWithFinderTaskId:(id)a0 stockId:(id)a1 pullScene:(unsigned int)a2 liveCookies:(id)a3 version:(unsigned long long)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
