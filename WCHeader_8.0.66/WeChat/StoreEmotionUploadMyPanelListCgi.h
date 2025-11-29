@class NSMutableArray;
@protocol StoreEmotionUploadMyPanelListCgiDelegate;

@interface StoreEmotionUploadMyPanelListCgi : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableArray *m_productIDList;
@property (weak, nonatomic) id<StoreEmotionUploadMyPanelListCgiDelegate> m_delegate;
@property (nonatomic) unsigned int m_eventId;
@property (nonatomic) BOOL m_hasStartRequestOnce;
@property (nonatomic) BOOL m_ignoreLimit;
@property (nonatomic) int code;

- (id)initWithProductIDList:(id)a0 delegate:(id)a1;
- (void)setNeedPids:(id)a0;
- (void)startRequest;
- (BOOL)isActive;
- (void)startInternalRequest;
- (void)startSortedLogic;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callFailedDelegate;
- (void)callOKDelegate;
- (void).cxx_destruct;

@end
