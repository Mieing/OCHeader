@class NSString, NSMutableArray, SKBuiltinBuffer_t;
@protocol StoreEmotionGetDonorListCgiDelegate;

@interface StoreEmotionGetDonorListCgi : MMObject <PBMessageObserverDelegate> {
    NSString *m_pid;
    NSMutableArray *m_donorList;
    SKBuiltinBuffer_t *m_reqBuf;
    BOOL m_hasMore;
    unsigned int m_eventID;
}

@property (weak, nonatomic) id<StoreEmotionGetDonorListCgiDelegate> delegate;

- (id)initWithPid:(id)a0;
- (BOOL)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callFailedDelegate;
- (void).cxx_destruct;

@end
