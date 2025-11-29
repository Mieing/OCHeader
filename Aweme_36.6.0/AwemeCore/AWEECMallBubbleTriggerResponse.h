@class AWEECMallMessageRedTag, NSString, NSDictionary, AWEECMallSyncMessage, AWEECMallBubbleModel;

@interface AWEECMallBubbleTriggerResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECMallSyncMessage *syncMsg;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWEECMallBubbleModel *bubbleMsg;
@property (retain, nonatomic) AWEECMallMessageRedTag *redTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
