@class NSData, NSMutableArray;
@protocol StoreEmotionRecoverMyPanelListCgiDelegate;

@interface StoreEmotionRecoverMyPanelListCgi : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<StoreEmotionRecoverMyPanelListCgiDelegate> delegate;
@property (nonatomic) unsigned int m_eventId;
@property (retain, nonatomic) NSData *currReqBuf;
@property (retain, nonatomic) NSMutableArray *emotionsArray;
@property (retain, nonatomic) NSMutableArray *emotionSetInfoArray;
@property (nonatomic) int scene;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (BOOL)isActive;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)startInternalRequest;
- (void)OnGetEmoticonPanelList:(id)a0;
- (void)callOKDelegateWithPids:(id)a0 andSetInfos:(id)a1;
- (void)callFailedDelegate;
- (void).cxx_destruct;

@end
