@class NSString;

@interface WCFinderDramaPurchaseCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long dramaTopicID;
@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) int reportScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderUsername:(id)a0 dramaTopicID:(unsigned long long)a1 feedID:(id)a2 reportScene:(int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
