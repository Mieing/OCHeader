@class NSMutableArray, BaseResponse;

@interface StatusNotifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned int chatContactCount;
@property (retain, nonatomic) NSMutableArray *chatContactList;

+ (void)initialize;

- (void)setChatContactList:(id)a0;
- (id)chatContactList;
- (void)setChatContactCount:(unsigned int)a0;
- (unsigned int)chatContactCount;
- (void)setNewMsgId:(unsigned long long)a0;
- (unsigned long long)newMsgId;
- (void)setMsgId:(unsigned int)a0;
- (unsigned int)msgId;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
