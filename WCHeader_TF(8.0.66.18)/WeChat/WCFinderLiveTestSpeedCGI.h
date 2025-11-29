@interface WCFinderLiveTestSpeedCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned int sceneCode;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int uploadSize;
@property (nonatomic) unsigned int downloadSize;
@property (nonatomic) unsigned int concurrentNum;

- (id)initWithSceneCode:(unsigned int)a0 opCode:(unsigned int)a1 uploadSize:(unsigned int)a2 downloadSize:(unsigned int)a3 concurrentNum:(unsigned int)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void).cxx_destruct;

@end
