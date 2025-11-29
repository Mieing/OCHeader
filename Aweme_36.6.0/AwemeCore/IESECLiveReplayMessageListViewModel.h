@class IESECLiveReplayMessageModel, IESECLiveReplayDataStore, NSMutableArray, NSCache;
@protocol IESECHTTPRequestTask;

@interface IESECLiveReplayMessageListViewModel : NSObject

@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (retain, nonatomic) NSCache *messageCache;
@property (retain, nonatomic) IESECLiveReplayMessageModel *currentItemMessageModel;
@property (nonatomic) long long currentMessageCellIndex;
@property (retain, nonatomic) NSMutableArray *cellViewModels;
@property (retain, nonatomic) id<IESECHTTPRequestTask> messageListRequestTask;

- (void)updateCurrentReplayItemWithModel:(id)a0 completion:(id /* block */)a1;
- (id)getNextCellViewModel;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;

@end
