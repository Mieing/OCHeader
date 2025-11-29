@protocol SoterUpdateMPAuthKeyCgiDelegate;

@interface SoterUpdateMPAuthKeyCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<SoterUpdateMPAuthKeyCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequestWithPublicKeyString:(id)a0;
- (id)elementJsonWithPublicKeyString:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callOkDelegate;
- (void)callErrorDelegate;
- (void).cxx_destruct;

@end
