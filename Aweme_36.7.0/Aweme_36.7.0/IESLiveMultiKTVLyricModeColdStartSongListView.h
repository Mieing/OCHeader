@class IESLiveKTVMusicManager, NSMutableArray;

@interface IESLiveMultiKTVLyricModeColdStartSongListView : UIView

@property (retain, nonatomic) NSMutableArray *musiclistArray;
@property (retain, nonatomic) NSMutableArray *songItemList;
@property (nonatomic) long long itemCount;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL inDynamicKTV;
@property (nonatomic) BOOL isPartyKTV;
@property (retain, nonatomic) IESLiveKTVMusicManager *musicManager;
@property (copy, nonatomic) id /* block */ clickOrderSongBtnCallback;

- (id)initWithDIContext:(id)a0;
- (void)initView;
- (void)enterPartyKTV;
- (void)updateUIWithMusiclistArray:(id)a0;
- (void)enterDynamicMultiKTV;
- (void)updatePlayingMusicID:(long long)a0;
- (void).cxx_destruct;
- (void)showWithCompletion:(id /* block */)a0;
- (void)hide;
- (void)layoutSubviews;
- (void)updateItemCount:(long long)a0;

@end
