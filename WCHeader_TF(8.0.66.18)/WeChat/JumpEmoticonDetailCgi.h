@class NSString;
@protocol IJumpEmoticonDetailCgiDelegate;

@interface JumpEmoticonDetailCgi : MMObject <PBMessageObserverDelegate>

@property (copy, nonatomic) id /* block */ m_okBlock;
@property (copy, nonatomic) id /* block */ m_failedBlock;
@property (retain, nonatomic) NSString *m_urlString;
@property (weak, nonatomic) id<IJumpEmoticonDetailCgiDelegate> m_delegate;
@property (nonatomic) unsigned int m_eventId;

+ (id)instanceWithDelegate:(id)a0;
+ (id)instanceWithOkBlock:(id /* block */)a0 failedBlock:(id /* block */)a1;

- (id)init;
- (void)dealloc;
- (BOOL)startRequestWithUrlString:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onCgiFailed:(id)a0;
- (void)onCgiOkWithPid:(id)a0;
- (void).cxx_destruct;

@end
