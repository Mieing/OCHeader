@class NSArray, NSMutableIndexSet, NSDictionary, NSString, NSMutableArray;

@interface IESIMChatDiskCleanDataComponent : AWEIMComponentBase <IESIMChatDiskCleanDataInterface>

@property (retain, nonatomic) NSMutableArray *originViewModels;
@property (copy, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) NSMutableIndexSet *selectedIndexSet;
@property (nonatomic) long long selectedTotalSize;
@property (nonatomic) unsigned long long filterType;
@property (copy, nonatomic) NSDictionary *settingConfigDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fakeProgressCallBack:(double)a0 progressBlock:(id /* block */)a1;

- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)selectIndex:(unsigned long long)a0 checked:(BOOL)a1;
- (void)resetSelect;
- (void)deleteSelectedAttachmentsWithSize:(long long)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)deleteSelectedChatsWithSize:(long long)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchDiskSpaceDataWithCompletion:(id /* block */)a0;
- (void)switchFilterType:(unsigned long long)a0 completion:(id /* block */)a1;
- (long long)calculateSelectedAttachmentDiskSize;
- (void)trackFirstFrameCost:(long long)a0 success:(BOOL)a1;
- (void)p_trackEnterPage:(long long)a0;
- (id)p_sortViewModels:(id)a0 byFilterType:(unsigned long long)a1;
- (void)batchFetchFirstPageDataWithVMs:(id)a0 completion:(id /* block */)a1;
- (void)calculateSelectedTotalDiskSize;
- (long long)diskSizeWithVM:(id)a0 filterType:(unsigned long long)a1;
- (long long)p_binarySearch:(long long)a0 inArray:(id)a1 filterType:(unsigned long long)a2;
- (void)p_trackDeleteType:(id)a0 conCount:(unsigned long long)a1 cleanSize:(long long)a2 cost:(long long)a3 error:(id)a4;
- (void)selectAll;
- (void).cxx_destruct;

@end
