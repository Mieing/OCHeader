@class WCPayIdKeyRegularReporter, NSString;
@protocol WCPayPayAuthNativeCgiDelegate;

@interface WCPayPayAuthNativeCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayPayAuthNativeCgiDelegate> m_delegate;
@property (retain, nonatomic) WCPayIdKeyRegularReporter *m_cgiReporter;
@property (retain, nonatomic) NSString *m_url;
@property (nonatomic) unsigned int m_scene;
@property (nonatomic) unsigned int m_channel;
@property (nonatomic) unsigned int m_sourceType;
@property (retain, nonatomic) NSString *m_sourceInfo;
@property (nonatomic) unsigned int m_A8keyScene;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)callErrorDelegate;
- (void)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
