@class NSArray, NSMutableArray, NSString;

@interface AWEPostPageMatchMissionListData : NSObject <AWEPostPageListDataTemplate>

@property (retain, nonatomic) NSMutableArray *secRows;
@property (copy, nonatomic) NSArray *sortDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)configSection:(id)a0 atIndex:(long long)a1;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)sortItems;
- (id)listData;

@end
