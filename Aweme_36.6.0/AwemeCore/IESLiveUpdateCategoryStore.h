@protocol IESLiveRoomService;

@interface IESLiveUpdateCategoryStore : IESLiveOptCategoryStore

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)updateFromLiveType:(unsigned long long)a0 category:(id)a1 toCategory:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
