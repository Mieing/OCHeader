@class NSString;
@protocol WCPayFaceHBCgiDelegate;

@interface WCPayFaceHBCgi : MMObject <PBMessageObserverDelegate> {
    id<WCPayFaceHBCgiDelegate> m_delegate;
    NSString *m_key;
}

@property (nonatomic) unsigned int cgiNumber;
@property (nonatomic) unsigned int m_uiRetryCount;

- (id)initWithDelegate:(id)a0 Key:(id)a1;
- (void)dealloc;
- (void)startRequest:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
