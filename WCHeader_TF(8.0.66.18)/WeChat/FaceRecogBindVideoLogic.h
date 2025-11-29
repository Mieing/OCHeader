@protocol FaceRecogBindVideoLogicDelegate;

@interface FaceRecogBindVideoLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<FaceRecogBindVideoLogicDelegate> delegate;

- (BOOL)startBindVideoForSpam:(id)a0 bioId:(unsigned long long)a1 videoCdnId:(id)a2 videoAesKey:(id)a3 verifyInfo:(id)a4 userTicket:(id)a5 isRSA:(BOOL)a6;
- (BOOL)startBindVideo:(id)a0 bioId:(unsigned long long)a1 videoFileId:(id)a2 videoAesKey:(id)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleBindVideo:(id)a0;
- (void).cxx_destruct;

@end
