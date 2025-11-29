@class WCDataItem, NSString, WCPlayerConfigViewController, WCMediaItem, WCImageView;

@interface WCContentItemViewTemplateHotVideo : WCContentItemBaseView <WCImageViewDelegate, WCPlayerConfigViewControllerDelegate, WCActionSheetDelegate, UIGestureRecognizerDelegate> {
    WCDataItem *m_oDataItem;
    WCMediaItem *m_oMediaItem;
    WCImageView *m_oWCCoverImage;
}

@property (retain, nonatomic) WCPlayerConfigViewController *videoPlayerVC;
@property (nonatomic) unsigned long long legalityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)dealloc;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)onClickWCImage:(id)a0;
- (void)onLongPressedWCImage:(id)a0;
- (void)playHotVideo;
- (id)getPlayerInfoWith:(BOOL)a0;
- (id)getImage;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)onLongPress:(id)a0;
- (id)generateMsgWithMediaWrap:(id)a0;
- (id)generateFavWithMediaWrap:(id)a0;
- (void)onForwardCancle:(id)a0;
- (void)onForwardSuccess:(id)a0;
- (void)onCloseFullScreenPlay:(id)a0;
- (void)onCloseFullScreenPlayComplete:(id)a0;
- (void)onTapAttachButton:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
