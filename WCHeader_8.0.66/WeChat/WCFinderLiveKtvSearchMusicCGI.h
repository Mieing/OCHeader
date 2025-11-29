@class NSData, NSString;

@interface WCFinderLiveKtvSearchMusicCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSString *searchKey;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithLiveTaskId:(id)a0 searchId:(id)a1 searchKey:(id)a2 lastBuffer:(id)a3 liveCookies:(id)a4 scene:(unsigned int)a5 successBlock:(id /* block */)a6 failureBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
