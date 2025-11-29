@protocol WCPayOverseaIBGGetWalletCgiDelegate;

@interface WCPayOverseaIBGGetWalletCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayOverseaIBGGetWalletCgiDelegate> m_delegate;
@property (nonatomic) BOOL m_isCgiEnd;

+ (id)getSaveRootDir;
+ (id)getSavePathWithTpaCountry:(unsigned int)a0;
+ (void)checkFileWithTpaCountry:(unsigned int)a0;
+ (id)GetCacheRespWithTpaCountry:(unsigned int)a0;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (BOOL)isCgiEnd;
- (void)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callErrorDelegateWithErrorCode:(int)a0 ErrorMsg:(id)a1;
- (void)callOkDelegateWithRespObject:(id)a0;
- (id)cacheFromResp:(id)a0;
- (void).cxx_destruct;

@end
