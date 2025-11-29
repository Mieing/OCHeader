@class BDECIMClient;

@interface BDECPigeonParticipantManager : NSObject

@property (retain, nonatomic) BDECIMClient *client;

- (void)fetchCurrentParticipantWithPigeonBizType:(id)a0 extend:(id)a1 completion:(id /* block */)a2;
- (void)fetchParticipantWithPigeonUids:(id)a0 pigeonBizType:(id)a1 extend:(id)a2 completion:(id /* block */)a3;
- (id)initWithIMClient:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
