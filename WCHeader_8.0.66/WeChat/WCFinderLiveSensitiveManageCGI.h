@class NSArray;

@interface WCFinderLiveSensitiveManageCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSArray *operateSensitiveDataItemList;
@property (nonatomic) int opType;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)createSensitiveAddCGIWithFinderTaskId:(id)a0 opSensitiveItems:(id)a1 completion:(id /* block */)a2;
+ (id)createSensitiveDeleteCGIWithFinderTaskId:(id)a0 opSensitiveItems:(id)a1 completion:(id /* block */)a2;
+ (id)createSensitiveGetCGIWithFinderTaskId:(id)a0 completion:(id /* block */)a1;

- (id)initWithFinderTaskId:(id)a0 opType:(int)a1 opSensitiveItems:(id)a2 completion:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)convertSenstiveDataItemListFromResponse:(id)a0;
- (BOOL)isSensitiveWordCanTrust:(int)a0;
- (void).cxx_destruct;

@end
