@class NSString;

@interface AWERecorderDraftEntranceHelperImpl : NSObject <ACCRecorderDraftEntranceHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createNewRecorderAfterFinishingOldCreation:(id)a0 oldPublishModel:(id)a1 preCompletion:(id /* block */)a2;
- (BOOL)shouldStayInRecorderAfterSavingDraft:(id)a0;
- (void)createNewRecorderAfterFinishingOldCreation:(id)a0 dismissAnimated:(BOOL)a1 oldPublishModel:(id)a2 preCompletion:(id /* block */)a3;
- (BOOL)isContainingRecorder:(id)a0;
- (BOOL)isContainingH5:(id)a0;

@end
