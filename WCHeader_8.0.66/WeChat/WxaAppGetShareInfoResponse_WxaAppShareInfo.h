@class WxaAppGetShareInfoResponse_WxaAppShareInfo_ToDoMsgInfo, NSString, WxaAppGetShareInfoResponse_WxaAppShareInfo_ChatToolMsgInfo, WxaAppGetShareInfoResponse_WxaAppShareInfo_UpdatableMsgInfo;

@interface WxaAppGetShareInfoResponse_WxaAppShareInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shareName;
@property (retain, nonatomic) NSString *shareKey;
@property (retain, nonatomic) WxaAppGetShareInfoResponse_WxaAppShareInfo_UpdatableMsgInfo *updateablemsgInfo;
@property (nonatomic) BOOL isUpdatablemsg;
@property (nonatomic) BOOL isTodomsg;
@property (retain, nonatomic) WxaAppGetShareInfoResponse_WxaAppShareInfo_ToDoMsgInfo *todoMsgInfo;
@property (nonatomic) BOOL isSecretmsg;
@property (nonatomic) BOOL isChattoolmsg;
@property (retain, nonatomic) WxaAppGetShareInfoResponse_WxaAppShareInfo_ChatToolMsgInfo *chattoolmsgInfo;

+ (void)initialize;

@end
