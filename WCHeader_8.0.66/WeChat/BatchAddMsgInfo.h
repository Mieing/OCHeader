@class NSString, CMessageWrap;

@interface BatchAddMsgInfo : NSObject

@property (retain, nonatomic) CMessageWrap *wrapMsg;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int uiDes;
@property (nonatomic) BOOL isCanAddDB;
@property (nonatomic) unsigned long long addMsgType;
@property (retain, nonatomic) NSString *clusterType;
@property (nonatomic) BOOL isInsertNew;
@property (nonatomic) BOOL addDBResult;
@property (nonatomic) BOOL isNotify;
@property (nonatomic) BOOL isNeedChangeDisplay;

- (id)realChatName;
- (void).cxx_destruct;

@end
