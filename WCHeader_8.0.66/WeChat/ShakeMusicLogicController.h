@class NSString;
@protocol ShakeLogicProxyDelegate;

@interface ShakeMusicLogicController : MMObject <IMusicSearchExt> {
    id<ShakeLogicProxyDelegate> m_delegate;
    unsigned int m_sessionId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)OnGetMusicItem:(id)a0 andSessionId:(unsigned int)a1;
- (void)OnMusicError:(int)a0 andSessionId:(unsigned int)a1;
- (id)initWithDelegate:(id)a0;
- (void)shakeReport;
- (void)shakeStop;
- (void)shakeReset;
- (void)shakeTerminate;
- (BOOL)isShowBannerView;
- (id)getMsgForState:(unsigned int)a0;
- (unsigned int)getSessionId;
- (void).cxx_destruct;

@end
