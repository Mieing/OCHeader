@class NSString, AWETeenMoreSheetView;

@interface AWETeenGeneralShareButton : AWETeenGeneralBaseActionButton <AWETeenSaveDataCenterDelegate, AWETeenPanelPresentPortocol, AWETeenShareMessage>

@property (retain, nonatomic) AWETeenMoreSheetView *sharePanelView;
@property (copy, nonatomic) NSString *reportID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reportAction;
- (void)btnClick;
- (void)willDismissPanel:(id)a0;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)didFinishShareWithItemID:(id)a0 shareCount:(id)a1;
- (void)p_handleBroadcastNotification:(id)a0;
- (void)p_updateShareCount;
- (id)copyLinkAction;
- (void)saveDataCenter:(id)a0 downloadCompleted:(long long)a1;
- (void)saveDataCenter:(id)a0 saveToSysPhotosCompleted:(BOOL)a1;
- (void)saveDataCenter:(id)a0 needApplyPhotoPermission:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)saveButton;

@end
