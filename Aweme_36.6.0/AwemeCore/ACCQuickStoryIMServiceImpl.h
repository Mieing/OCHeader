@class AWEPublishIMVideoTask, NSString, AWEVideoPublishViewModel, AWEResourceUploadParametersResponseModel, UIViewController;
@protocol ACCPublishServiceProtocol, ACCSequenceEditServiceProtocol, ACCQuickStoryIMServiceDelegate, AWEIMHalfScreenContainerVCProtocol, ACCEditViewContainer, AWEIMSyncStoryToFriendsListViewControllerProtocol, ACCEditServiceProtocol;

@interface ACCQuickStoryIMServiceImpl : NSObject <AWEIMSyncStoryToFriendsListViewControllerDelegate, AWEIMHalfScreenContainerVCDelegate, AWEPublishTaskMessage, ACCQuickStoryIMServiceProtocol>

@property (retain, nonatomic) UIViewController<AWEIMSyncStoryToFriendsListViewControllerProtocol> *panel;
@property (retain, nonatomic) UIViewController<AWEIMHalfScreenContainerVCProtocol> *container;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) AWEPublishIMVideoTask *IMTask;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (nonatomic) BOOL didObserveMergeNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCQuickStoryIMServiceDelegate> delegate;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (nonatomic) BOOL shouldVideoSaveAsPhoto;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (BOOL)canGoNext;
- (void)syncStoryToFriendsListViewControllerDidClickSendButton:(id)a0 shouldSendToQuickStory:(BOOL)a1 selectedList:(id)a2;
- (void)syncStoryToFriendsListViewController:(id)a0 didSelectShareModel:(id)a1;
- (void)syncStoryToFriendsListViewControllerDidClickMore:(id)a0;
- (void)syncStoryToFriendsListViewControllerDidClickSendToQuickStory:(id)a0;
- (id)p_trackParams;
- (void)showPanelWithRepository:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 viewContainer:(id)a3;
- (void)p_showEditView:(BOOL)a0 animated:(BOOL)a1;
- (void)registShareResultCallback;
- (void)p_trackShareWithModels:(id)a0 createGroup:(BOOL)a1;
- (void)p_publishThenSendIM;
- (void)p_sendIM;
- (void)didMergeVideoNotification:(id)a0;
- (void)didMergePhotoNotification:(id)a0;
- (void)p_runIMTask;
- (void)p_getFirstImageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
