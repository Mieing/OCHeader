@class NSString;
@protocol AWEDouyinSelectAINoteContainerProtocol;

@interface AWEDouyinSelectAINoteService : HTSService <AWEDouyinSelectAINoteService>

@property (weak, nonatomic) id<AWEDouyinSelectAINoteContainerProtocol> aiNoteContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getVideoScreenShot;
- (BOOL)enableAINote:(id)a0;
- (BOOL)enableAINote;
- (BOOL)enableAINoteUserProfile;
- (void)registerAINoteContainer:(id)a0;
- (void)unregisterAINoteContainer;
- (id)getAINotePanelUrl;
- (id)getAINoteListUrl;
- (void)changePlayerState:(long long)a0;
- (BOOL)enableAINoteWithReferString:(id)a0;
- (BOOL)enableAlwaysAINoteWithModel:(id)a0;
- (void).cxx_destruct;

@end
