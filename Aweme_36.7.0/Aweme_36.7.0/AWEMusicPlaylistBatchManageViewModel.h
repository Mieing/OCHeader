@class NSString, AWEPlaylistDataController;
@protocol AWEMusicPlaylistBatchManageViewModelDelegate;

@interface AWEMusicPlaylistBatchManageViewModel : NSObject <AWEPlaylistDataControllerBatchManageDelegate>

@property (nonatomic) long long selectCount;
@property (nonatomic) BOOL isCellRemoving;
@property (weak, nonatomic) id<AWEMusicPlaylistBatchManageViewModelDelegate> delegate;
@property (retain, nonatomic) AWEPlaylistDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataController:(id)a0;
- (void)selectOrDeselectAll:(BOOL)a0;
- (void)refreshSelectCount;
- (void)didSelectAt:(id)a0;
- (void)selectCountDidChange;
- (void)mangeSongListChanged;
- (void).cxx_destruct;

@end
