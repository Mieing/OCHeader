@class NSString, NSDictionary;

@interface AWEMediaTemplatesFetchImpl : NSObject <ACCMediaTemplatesFetchProtocol> {
    NSDictionary *_commonParams;
}

@property (readonly, nonatomic) unsigned long long fetchCountPerRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needCommonParams;

- (id)commonParams;
- (void)favoriteMediaTemplateWithID:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)unFavoriteMediaTemplateWithID:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchMediaTemplatesCategories:(id /* block */)a0;
- (void)refreshMediaTemplatesWithCategory:(id)a0 completion:(id /* block */)a1;
- (void)loadmoreMediaTemplatesWithCategory:(id)a0 cursor:(id)a1 completion:(id /* block */)a2;
- (void)refreshFavoriteMediaTemplatesCompletion:(id /* block */)a0;
- (void)loadmoreFavoriteMediaTemplatesWithCursor:(id)a0 completion:(id /* block */)a1;
- (void)fetchMediaTemplateWithID:(id)a0 completion:(id /* block */)a1;
- (void)fetchMediaTemplateWithID:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
