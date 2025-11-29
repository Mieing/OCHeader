@class NSArray, NSMutableDictionary;

@interface WCFinderTranslateCGI : WCBaseCgi

@property (copy, nonatomic) NSArray *translateInfoArray;
@property (retain, nonatomic) NSMutableDictionary *keyMap;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithTranslateInfos:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)didGetResponse:(id)a0;
- (unsigned int)_clientIDForId:(id)a0;
- (void).cxx_destruct;

@end
