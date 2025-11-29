@class NSString, IESLiveUploadGameNameStore;

@interface IESLiveUploadGameNameFragment : IESLiveGuideComponent <IESLiveContentCategoryModuleUploadGameAction>

@property (retain, nonatomic) IESLiveUploadGameNameStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)showUploadGameNameWithCategoryTitle:(id)a0 scene:(unsigned long long)a1 confirmBlock:(id /* block */)a2;
- (void)dismissPresentor:(id)a0;
- (void)trackConfirmEventWithGameName:(id)a0 anchorId:(id)a1 scene:(unsigned long long)a2;
- (void)trackUploadGameNameViewShowWithAnchorId:(id)a0 scene:(unsigned long long)a1;
- (id)sceneString:(unsigned long long)a0;
- (void).cxx_destruct;

@end
