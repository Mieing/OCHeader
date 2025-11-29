@interface AWEECOMIMDBFixConfig : NSObject

@property (nonatomic) double receiveLongConnectionMsgTimeout;
@property (nonatomic) long long receiveLongConnectionMsgTimeoutCount;
@property (nonatomic) BOOL enableReLoginWhenMsgTimeout;
@property (nonatomic) BOOL enableRecreateDBWhenMsgTimeout;
@property (nonatomic) BOOL enableRemoveChatListWhenPop;
@property (nonatomic) long long reLoginMaxCount;
@property (nonatomic) BOOL enableDBFixLogic;

@end
