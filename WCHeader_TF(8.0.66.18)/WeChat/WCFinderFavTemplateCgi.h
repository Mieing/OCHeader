@class NSString;

@interface WCFinderFavTemplateCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) unsigned long long timestampMs;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int fromScene;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderUsername:(id)a0 templateID:(id)a1 timeStampMs:(unsigned long long)a2 opType:(unsigned int)a3 fromScene:(unsigned int)a4 sessionBuffer:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
