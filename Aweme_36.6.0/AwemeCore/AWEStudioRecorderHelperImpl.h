@class NSString;

@interface AWEStudioRecorderHelperImpl : NSObject <AWEStudioRecorderHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createNewRecorderAfterFinishingOldCreation:(id)a0 oldPublishModel:(id)a1 preCompletion:(id /* block */)a2;
- (void)createNewRecorderAfterFinishingOldCreation:(id)a0 dismissAnimated:(BOOL)a1 oldPublishModel:(id)a2 preCompletion:(id /* block */)a3;
- (void)p_copyMusicFromPublishModel:(id)a0 toPublishModel:(id)a1;
- (void)p_modifyPublishModel:(id)a0 oldPublishModel:(id)a1;
- (void)p_copyPropsFromPublishModel:(id)a0 toInputData:(id)a1 completion:(id /* block */)a2;

@end
