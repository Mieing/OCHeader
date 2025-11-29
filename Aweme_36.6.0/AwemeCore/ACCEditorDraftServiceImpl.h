@class NSString, AWEVideoPublishViewModel;

@interface ACCEditorDraftServiceImpl : NSObject <ACCEditorDraftService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)saveDraftIfNecessary;
- (void)removePublishFailedDraft;
- (void)hadBeenModified;
- (void)saveDraftEnterNextVC;
- (void).cxx_destruct;

@end
