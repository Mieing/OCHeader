@class AWEIMUser, NSString, AWEIMMessage, NSDictionary, IESIMSendMessageModel, IESIMSendMessageResponse, HMDThreadSafeDictionary;
@protocol IESIMConversationProtocol, IESIMMessageProtocol;

@interface IESIMSendMessageTrackContext : NSObject <IESIMSendMessageTrackContextProtocol>

@property (nonatomic) long long processType;
@property (nonatomic) long long messageType;
@property (nonatomic) long long aweType;
@property (readonly, nonatomic) NSString *pID;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (retain, nonatomic) AWEIMMessage *originSendMessage;
@property (retain, nonatomic) IESIMSendMessageModel *sendModel;
@property (retain, nonatomic) NSDictionary *sendTrackParams;
@property (retain, nonatomic) NSString *clientMessageID;
@property (retain, nonatomic) IESIMSendMessageResponse *response;
@property (nonatomic) BOOL isResponseTimeOut;
@property (nonatomic) BOOL isResend;
@property (retain, nonatomic) id<IESIMMessageProtocol> responseMessage;
@property (retain, nonatomic) HMDThreadSafeDictionary *passParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
