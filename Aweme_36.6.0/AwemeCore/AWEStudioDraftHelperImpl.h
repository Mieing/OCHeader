@class NSString;

@interface AWEStudioDraftHelperImpl : NSObject <AWEStudioDraftHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useNLEURSProgressiveRenderWithPublishViewModel:(id)a0 completion:(id /* block */)a1;

- (void)startWithDraft:(id)a0 isBackup:(BOOL)a1 modifyPublishModelBlock:(id /* block */)a2 execute:(id /* block */)a3;
- (id)generateAttachTextWithDuetChain:(id)a0 maxWidth:(double)a1 font:(id)a2;
- (void)startWithDraft:(id)a0 isBackup:(BOOL)a1 execute:(id /* block */)a2;
- (void)tryMusicAgainWithDraft:(id)a0 modifyPublishModelBlock:(id /* block */)a1 execute:(id /* block */)a2;
- (void)reshootWithInputData:(id)a0 execute:(id /* block */)a1;
- (BOOL)enableManageDisk;
- (void)startMediumVideoDraftWithPublishModel:(id)a0 execute:(id /* block */)a1;
- (void)startWithDraft:(id)a0 publishModel:(id)a1 publishModelError:(id)a2 execute:(id /* block */)a3;

@end
