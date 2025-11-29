@class NSString, CMessageWrap;
@protocol MsgImgFullScreenWindowDelegate;

@interface MsgImgFullScreenWindow : MMUIWindow <WCNetworkMediaPlayerDelegate> {
    id<MsgImgFullScreenWindowDelegate> m_delegate;
    CMessageWrap *m_tempMessageWrap;
    BOOL m_bCloseForViewDetail;
}

@property (retain, nonatomic) NSString *chatname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (BOOL)viewAlreadyShow;
- (BOOL)isForAd:(id)a0;
- (void)onPlayAttachVideo:(id)a0;
- (id)getWCNetworkMediaPlayer:(id)a0;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)a0;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)a0;
- (void)onShareVideoToTimeline:(BOOL)a0;
- (void).cxx_destruct;

@end
