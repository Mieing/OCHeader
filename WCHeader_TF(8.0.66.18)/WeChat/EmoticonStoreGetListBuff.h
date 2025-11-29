@class NSData, NSMutableArray;

@interface EmoticonStoreGetListBuff : MMObject

@property (retain, nonatomic) NSData *m_reqBuf;
@property (retain, nonatomic) NSMutableArray *m_adArray;
@property (nonatomic) unsigned int m_eventId;
@property (nonatomic) unsigned int m_reqType;
@property (nonatomic) unsigned long long m_sessionId;

- (void).cxx_destruct;

@end
