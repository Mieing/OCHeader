@class NSMutableDictionary;

@interface MonoServiceMsgHistory : NSObject

@property (retain, nonatomic) NSMutableDictionary *m_msgHistoryDic;

- (id)init;
- (BOOL)hasHistoryMsg:(id)a0;
- (BOOL)hasCancelMsgWithRoomID:(unsigned long long)a0 serviceType:(id)a1;
- (id)getHistoryMsg:(id)a0;
- (id)msgsWithServiceType:(id)a0 key:(id)a1;
- (void)addHistoryWithMsg:(id)a0;
- (void).cxx_destruct;

@end
