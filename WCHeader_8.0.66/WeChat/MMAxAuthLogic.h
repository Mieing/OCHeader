@class AxAuthSecResp;
@protocol MMAxAuthLogicDelegate;

@interface MMAxAuthLogic : NSObject <PBMessageObserverDelegate> {
    AxAuthSecResp *m_axAuthSecResp;
    BOOL m_canRetry;
    unsigned int m_no_response_retry_count;
    unsigned int m_system_error_retry_count;
    unsigned int m_server_busy_retry_count;
}

@property unsigned int eventId;
@property BOOL hasStarted;
@property (weak) id<MMAxAuthLogicDelegate> delegate;
@property (nonatomic) unsigned int axTicketExpireTimestamp;
@property (readonly, nonatomic) unsigned int axAuthCgiId;

- (id)initWithAxAuthSecResp:(id)a0;
- (id)axAuthDescription;
- (BOOL)isRequesting;
- (BOOL)startRequest;
- (void)failWithReason:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
