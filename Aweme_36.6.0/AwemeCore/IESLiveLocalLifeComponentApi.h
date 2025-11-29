@class NSString;

@interface IESLiveLocalLifeComponentApi : HTSLiveApi

@property (copy, nonatomic) NSString *baseURL;

- (void)requestWithPath:(id)a0 params:(id)a1 isPost:(BOOL)a2 modelClass:(Class)a3 callback:(id /* block */)a4;
- (void)fetchLocalLifePermission:(id /* block */)a0;
- (void)fetchGoodsCount:(id /* block */)a0;
- (void)fetchLocalLifeEntranceSchema:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
