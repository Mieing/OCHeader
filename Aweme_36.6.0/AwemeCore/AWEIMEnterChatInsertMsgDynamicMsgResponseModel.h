@class NSArray, NSString;

@interface AWEIMEnterChatInsertMsgDynamicMsgResponseModel : AWEBaseApiModel <IESIMSendUserActionResponseProtocol>

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSArray *actionsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActionType:(long long)a0 actionArr:(id)a1;
- (void).cxx_destruct;

@end
