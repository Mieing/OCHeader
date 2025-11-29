@class NSString;

@interface IESLiveAnchorCommercialComponentApi : HTSLiveApi

@property (copy, nonatomic) NSString *baseURL;

- (void)requestWithPath:(id)a0 params:(id)a1 isPost:(BOOL)a2 modelClass:(Class)a3 callback:(id /* block */)a4;
- (void)fetchEntranceInfoWithAnchorSecID:(id)a0 roomID:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeSelectedComponentWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchCardIsCommercialWithRoomID:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
