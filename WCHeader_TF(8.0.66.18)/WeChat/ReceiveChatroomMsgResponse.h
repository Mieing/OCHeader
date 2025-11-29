@class NSString, AtInfo, NSMutableArray, BaseResponse;

@interface ReceiveChatroomMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *msgPackList;
@property (nonatomic) unsigned long long nextSeq;
@property (retain, nonatomic) AtInfo *atInfo;
@property (retain, nonatomic) NSMutableArray *noticeMsgList;
@property (nonatomic) unsigned long long lastReceivedSeq;
@property (retain, nonatomic) NSMutableArray *refreshMsgPackList;
@property (retain, nonatomic) NSString *nextVersion;
@property (retain, nonatomic) NSMutableArray *invisibleSeqList;

+ (void)initialize;

@end
