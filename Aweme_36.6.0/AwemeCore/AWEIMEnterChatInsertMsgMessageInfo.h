@class AWEIMEnterChatInsertMsgDynamicMsgData, NSString, NSDictionary, NSNumber, AWEIMEnterChatInsertMsgStrategy;

@interface AWEIMEnterChatInsertMsgMessageInfo : AWEBaseApiModel

@property (readonly, nonatomic) BOOL isDynamicMsgData;
@property (readonly, nonatomic) NSNumber *msgType;
@property (readonly, copy, nonatomic) NSString *msgContent;
@property (readonly, nonatomic) NSDictionary *msgExt;
@property (readonly, nonatomic) AWEIMEnterChatInsertMsgStrategy *msgStrategy;
@property (readonly, nonatomic) AWEIMEnterChatInsertMsgDynamicMsgData *dynamicMsgData;

+ (id)msgStrategyJSONTransformer;
+ (id)dynamicMsgDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
