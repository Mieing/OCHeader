@class AWEOriginalSoundTrackManager, AWEOriginalSoundTrackLocalTrackPage, AWEMusicPerformancePageModel, AWEOriginalSoundTrackLocalMediaPage, NSArray, NSString;

@interface AWEOriginalSoundTrackNewDataSource : NSObject

@property (retain, nonatomic) AWEOriginalSoundTrackManager *dataManager;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL showMusicCenter;
@property (retain, nonatomic) AWEMusicPerformancePageModel *performancePage;
@property (retain, nonatomic) AWEOriginalSoundTrackLocalTrackPage *trackPage;
@property (retain, nonatomic) AWEOriginalSoundTrackLocalMediaPage *mediaPage;
@property (retain, nonatomic) AWEOriginalSoundTrackLocalMediaPage *cooperationMediaPage;
@property (readonly, nonatomic) NSArray *allMainFoldMedia;
@property (readonly, nonatomic) NSArray *allMedia;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *queueId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *artistID;

- (unsigned long long)cellTypeAtIndexPath:(id)a0;
- (unsigned long long)headerTypeForSection:(long long)a0;
- (id)headerTitleForSection:(long long)a0;
- (void)loadMoreWithCount:(id)a0 scene:(id)a1 retryCount:(long long)a2 responseBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)loadMoreTrackWithCount:(long long)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)loadMoreClipWithResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)loadMoreType:(long long)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)loadMoreWithCount:(id)a0 scene:(id)a1 responseBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (long long)p_clipPageNumber:(id)a0;
- (id)mediaModelAtIndexPath:(id)a0;
- (id)indexPathForMusicModel:(id)a0;
- (id)foldMediaViewModelAtIndexPath:(id)a0;
- (void)switchFoldStatusAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)removeAllObjects;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(unsigned long long)a0;

@end
