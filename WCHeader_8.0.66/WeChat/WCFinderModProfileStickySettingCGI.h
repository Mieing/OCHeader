@class NSString;

@interface WCFinderModProfileStickySettingCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL isStickyTop;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFeedID:(unsigned long long)a0 nonceID:(id)a1 username:(id)a2 isStickyTop:(BOOL)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
