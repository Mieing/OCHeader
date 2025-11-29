@class NSString, AWEOriginalSoundTrackManager, AWEMusicPerformancePageModel, NSMutableArray;

@interface AWEOriginalSoundTrackDataSource : NSObject

@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *allMedia;
@property (retain, nonatomic) AWEOriginalSoundTrackManager *dataManager;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL showMusicCenter;
@property (retain, nonatomic) AWEMusicPerformancePageModel *performancePage;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *queueId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *artistID;

- (unsigned long long)cellTypeAtIndexPath:(id)a0;
- (void)loadMoreWithCount:(long long)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (unsigned long long)headerTypeForSection:(long long)a0;
- (id)headerTitleForSection:(long long)a0;
- (id)headerSubTitleForSection:(long long)a0;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)removeAllObjects;
- (long long)numberOfSectionsInTableView:(id)a0;

@end
