@class NSString, MMFinderLiveContentVM, WCFinderFeedContentVM, WCFinderDataItem;

@interface WCFinderFeedLiveRoomTableViewCell : WCFinderTableViewCell <MMFinderLiveContentVMExt, WCFinderFeedCollectionViewCellProtocol, WCFinderFocusCellProtocol>

@property (readonly, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) MMFinderLiveContentVM *liveVM;
@property (nonatomic) BOOL isInLiveRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)a0;
- (BOOL)tryEnterLiveRoom;
- (void)exitLiveRoom;
- (void)pauseLive;
- (void)muteVideo:(BOOL)a0;
- (BOOL)shouldCaluculateAsFocusCell;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)a0 silencePlay:(BOOL)a1;
- (void)stopVideoIfSupport;
- (double)minPercentcellCanPlayDisplay;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)a0;
- (void)onCellBecomeFocus;
- (void)onCellDidEndFocused:(BOOL)a0;
- (BOOL)finderFeedCellIsCurrentMediaPlaying;
- (BOOL)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (id)finderFeedCellUnSupportMinimizePlayToast;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (BOOL)finderFeedCellIsCurrentMediaMute;
- (id)finderFeedCellMinimizeContentView:(BOOL)a0;
- (void)onSupportRotateStateChanged:(id)a0 rotateEnabled:(BOOL)a1;
- (void).cxx_destruct;

@end
