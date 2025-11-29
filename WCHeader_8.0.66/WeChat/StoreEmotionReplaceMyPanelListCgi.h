@class NSMutableArray;
@protocol StoreEmotionReplaceMyPanelListCgiDelegate;

@interface StoreEmotionReplaceMyPanelListCgi : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableArray *m_needUploadProductIDList;
@property (nonatomic) unsigned int m_eventId;
@property (nonatomic) BOOL m_hasStartRequestOnce;
@property (nonatomic) BOOL m_ignoreLimit;
@property (weak, nonatomic) id<StoreEmotionReplaceMyPanelListCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)setReplaceList:(id)a0;
- (void)startInternalRequest;
- (BOOL)isActive;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callOKDelegate;
- (void)callFailedDelegate;
- (void).cxx_destruct;

@end
