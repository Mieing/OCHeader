@class NSString;

@interface AWEIMMessageCombineShareReferContent : MTLModel <IESIMReferMessageInfoProtocol>

@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long messageType;
@property (copy) NSString *hint;
@property long long status;
@property long long refMsgIndexInConvV1;
@property long long refMsgIndexInConvV2;
@property BOOL refMsgInvisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDic:(id)a0;
- (void).cxx_destruct;

@end
