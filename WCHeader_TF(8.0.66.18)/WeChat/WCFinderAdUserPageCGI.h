@class NSString, NSData, FinderClientStatus;

@interface WCFinderAdUserPageCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long maxTid;
@property (nonatomic) BOOL needFansCount;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long reportScene;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *encryptedObjectId;

- (id)initWithContactUsername:(id)a0 maxTid:(unsigned long long)a1 reportScene:(unsigned long long)a2 needFansCount:(BOOL)a3 lastBuffer:(id)a4 clientStatus:(id)a5 feedID:(id)a6 encryptedObjectid:(id)a7 successful:(id /* block */)a8 failure:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
