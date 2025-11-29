@class NSString;
@protocol ACCMusicModelProtocol;

@interface ACCDraftResourceRecoverMusicOfflineChecker : ACCDraftResourceRecoverTask <ACCDraftResourceRecoverMusicProtocol>

@property (retain, nonatomic) id<ACCMusicModelProtocol> updatedMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updatePublishViewModel:(id)a0 updatedMusic:(id)a1;

- (void)updatePublishViewModel:(id)a0;
- (void)executeWithDraft:(id)a0 repository:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
