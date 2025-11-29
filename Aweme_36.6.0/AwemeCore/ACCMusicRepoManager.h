@class NSString, NSOperationQueue, AWERepoMusicModel, ACCBgmDownloadOperation;
@protocol ACCEditServiceProtocol, ACCMusicBizProtocol;

@interface ACCMusicRepoManager : NSObject <ACCBgmDownloadOperationDelegate, ACCMusicRepoProtocol>

@property (weak, nonatomic) AWERepoMusicModel *repoMusic;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) ACCBgmDownloadOperation *waitingApplyOperation;
@property (weak, nonatomic) id<ACCMusicBizProtocol> bizHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBgmVolume:(double)a0;
- (void)bgmDownloadOperationDidFinish:(id)a0 error:(id)a1;
- (void)addBgmWithMusic:(id)a0 process:(id /* block */)a1 completion:(id /* block */)a2;
- (void)addBgmWithMusicId:(id)a0 process:(id /* block */)a1 completion:(id /* block */)a2;
- (void)applyBubbleWaitingBgm;
- (void)clipBgm:(id)a0;
- (BOOL)needAutoApplyBGM;
- (BOOL)commitBgm:(id)a0;
- (void)startDownloadOperation:(id)a0;
- (void)applyBGMWithOperation:(id)a0;
- (void)removeBgm;
- (void)setSourceVolume:(double)a0;
- (void)toggleSourceAudio:(BOOL)a0;
- (id)initWithRepoMusic:(id)a0 editService:(id)a1;
- (void).cxx_destruct;

@end
