@class BDECPigeonClientV2;

@interface BDECPigeonParticipantManagerV2 : NSObject

@property (weak, nonatomic) BDECPigeonClientV2 *client;

- (void)fetchCurrentParticipantWithPigeonBizType:(id)a0 extend:(id)a1 completion:(id /* block */)a2;
- (void)fetchParticipantWithPigeonUids:(id)a0 pigeonBizType:(id)a1 extend:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
