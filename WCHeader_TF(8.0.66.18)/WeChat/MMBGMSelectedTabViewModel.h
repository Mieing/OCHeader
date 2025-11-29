@class NSString, MMBGMSelectedTabViewModelParams, MMBGMPanelPublishContext, MMBGMSelectedConfig;
@protocol MMBGMSelectedTabViewModelDelegate;

@interface MMBGMSelectedTabViewModel : NSObject <MMBGMTabViewModelProtocol>

@property (weak, nonatomic) id<MMBGMSelectedTabViewModelDelegate> delegate;
@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (retain, nonatomic) MMBGMSelectedTabViewModelParams *optionalParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)syncMusicFavStateToServerWithMusicData:(id)a0 bgmListType:(unsigned long long)a1;
+ (void)syncMusicUnFavStateToServerWithMusicData:(id)a0 bgmListType:(unsigned long long)a1;
+ (void)syncMusicPlayedStateToServerWithMusicData:(id)a0 bgmListType:(unsigned long long)a1;
+ (void)syncMusicUnPlayedStateToServerWithMusicData:(id)a0 bgmListType:(unsigned long long)a1;
+ (id)_commonBgmInteractParamWithMusicData:(id)a0 bgmListType:(unsigned long long)a1;
+ (void)_startBgmInteractCGIWithParams:(id)a0;

- (id)tabTitle;
- (unsigned long long)tabType;
- (void)loadData;
- (BOOL)hasMoreData;
- (void)loadMoreData;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)a0;
- (void)addMusicData:(id)a0;
- (void)removeMusicData:(id)a0;
- (void)setMusicDataToFirst:(id)a0;
- (BOOL)isReccommentdTabModel;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (unsigned long long)indexOfMusicInfo:(id)a0;
- (unsigned long long)getMaterialDuration;
- (void).cxx_destruct;

@end
