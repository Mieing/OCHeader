@protocol IESLiveRoomService;

@interface IESLiveItemShareApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)fetchItemShareListWithCompletion:(id /* block */)a0;
- (void)shareItemWithItem:(id)a0 itemType:(id)a1 targetSchema:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
