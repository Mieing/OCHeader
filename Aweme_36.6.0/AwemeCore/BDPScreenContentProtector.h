@class NSString, BDPFakeDRMPlayer;

@interface BDPScreenContentProtector : NSObject <BDPScreenRecordProtectorProtocol>

@property (retain, nonatomic) BDPFakeDRMPlayer *fakeDRMPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableUserScreenRecord;
- (void)disableUserScreenRecord;
- (void).cxx_destruct;
- (id)init;
- (void)setContentView:(id)a0;

@end
