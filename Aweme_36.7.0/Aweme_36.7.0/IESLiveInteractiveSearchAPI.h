@class NSNumber;

@interface IESLiveInteractiveSearchAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;

- (id)initWithRoomId:(id)a0;
- (void)getSearchResult:(id)a0 page:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
