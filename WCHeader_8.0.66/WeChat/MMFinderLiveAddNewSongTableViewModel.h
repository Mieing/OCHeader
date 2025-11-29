@class MMTableView, NSIndexPath, NSString, NSMutableSet, MMFinderLiveSongItem, NSMutableArray;

@interface MMFinderLiveAddNewSongTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate>

@property (retain, nonatomic) NSMutableArray *songs;
@property (weak, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMFinderLiveSongItem *editingItem;
@property (retain, nonatomic) MMFinderLiveSongItem *deletingItem;
@property (retain, nonatomic) NSIndexPath *indexPathToActivate;
@property (retain, nonatomic) NSMutableSet *existingSongNames;
@property (retain, nonatomic) NSString *targetWord;
@property (copy, nonatomic) id /* block */ updatedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0 songs:(id)a1;
- (void)dealloc;
- (void)clearData;
- (id)getCurrentValidSongs;
- (BOOL)canSubmitCurrentSongs;
- (void)scrollToIndex:(unsigned long long)a0;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (BOOL)mmTableView:(id)a0 shouldBeginRecognizeGesture:(id)a1;
- (void)handleTableViewPan:(id)a0;
- (BOOL)handleItemShouldBeginEditing:(id)a0;
- (void)handleItemDeletingChanged:(id)a0 deleting:(BOOL)a1;
- (void)handleItemEndEditing:(id)a0;
- (void)installTableView;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)mmTableView:(id)a0 shouldPassHitTest:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 safeAreaInsetsDidChange:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)checkAndToastSongNameDuplicated:(id)a0;
- (void)deleteItem:(id)a0 correspondingIndexPath:(id)a1;
- (id)indexPathForItem:(id)a0;
- (id)editingIndexPath;
- (void)notifySongsUpdated;
- (void)manualAddNewSong;
- (void)addNewSong;
- (void).cxx_destruct;

@end
