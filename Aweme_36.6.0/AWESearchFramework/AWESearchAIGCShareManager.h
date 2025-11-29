@class NSString, NSMutableSet, AWESearchAIGCSharePanelPublishCoverSupplementaryView, NSCache;

@interface AWESearchAIGCShareManager : NSObject <AWESearchAIGCSharePanelPublishCoverViewDelegate, AWESearchAIGCShareManagerModuleService>

@property (retain, nonatomic) NSMutableSet *shareDidSelectedSearchIDs;
@property (retain, nonatomic) NSMutableSet *shareDidSelectedPublishCoverModels;
@property (retain, nonatomic) AWESearchAIGCSharePanelPublishCoverSupplementaryView *sharePanelPublishCoverView;
@property (copy, nonatomic) id /* block */ postVideoBlock;
@property (retain, nonatomic) NSCache *publishCoverViewModelCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOnSharing;

+ (id)shareInstance;

- (void)requestCoverWithParams:(id)a0 completion:(id /* block */)a1;
- (void)shareBegin;
- (void)shareEnd;
- (BOOL)shareHadSelected:(id)a0;
- (void)shareDidSelected:(id)a0 publishCoverViewModel:(id)a1 disablePublish:(BOOL)a2;
- (void)shareCancelSelected:(id)a0 publishCoverViewModel:(id)a1 viewModel:(id)a2;
- (id)allSelectedSearchIDs;
- (void)showSearchAIGCSharePanel:(id)a0 enableSelect:(BOOL)a1 extraParams:(id)a2 viewController:(id)a3 showPublishVideoButton:(BOOL)a4 showPublishCoverWithModel:(id)a5 postVideoBlock:(id /* block */)a6;
- (void)updateSharePanelViewIfNeededWithDisablePublish:(BOOL)a0;
- (BOOL)fetchIsDisablePublishWithSearchId:(id)a0 viewModel:(id)a1;
- (BOOL)canUpdatePublishCoverViewWith:(id)a0;
- (void)updatePublishCoverViewModel:(id)a0 completion:(id /* block */)a1;
- (void)postVideoWithItem:(id)a0 model:(id)a1;
- (void)requestSlowCoverImageWithViewModel:(id)a0 completion:(id /* block */)a1;
- (void)coverView:(id)a0 didSelectItem:(id)a1 atIndex:(long long)a2 withModel:(id)a3;
- (void)shareDidSelected:(id)a0 publishCoverViewModel:(id)a1;
- (void)shareCancelSelected:(id)a0 publishCoverViewModel:(id)a1;
- (void)requestPreIDWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
