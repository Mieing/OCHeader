@class NSData;
@protocol VoIPTokenRegisterObjectDelegate;

@interface VoIPTokenRegisterObject : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSData *m_token;
@property (weak, nonatomic) id<VoIPTokenRegisterObjectDelegate> m_delegate;

- (id)initWithToken:(id)a0;
- (void)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callErrorDelegate;
- (void)callOkDelegate;
- (void).cxx_destruct;

@end
