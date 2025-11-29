@interface ExptLogic : MMObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int interval;
@property (nonatomic) BOOL isReqNow;

- (id)init;
- (void)dealloc;
- (void)checkToGetSvrExpt;
- (void)getSvrExpt:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)OnReceNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)resetGetXExptTime:(unsigned int)a0;
- (void)noteGetExptTime:(unsigned int)a0;
- (void)writeGetExptTime:(unsigned int)a0;
- (unsigned int)getLastGetExptTime;
- (void)noteGetExptIntervalSec:(unsigned int)a0;
- (unsigned int)getExptInterval;
- (unsigned int)getTimeFromFile:(id)a0;
- (BOOL)saveTimeToFile:(unsigned int)a0 fileName:(id)a1;
- (id)mmExptPath:(id)a0;

@end
