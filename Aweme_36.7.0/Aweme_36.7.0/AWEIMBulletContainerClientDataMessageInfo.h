@class NSString;

@interface AWEIMBulletContainerClientDataMessageInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *messageUUID;
@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSString *fromUID;
@property (copy, nonatomic) NSString *toUID;
@property (nonatomic) BOOL isSender;
@property (copy, nonatomic) NSString *msgDescription;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *msgReceiverDescription;
@property (copy, nonatomic) NSString *receiverPushDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)configDataWithMessage:(id)a0;
- (void).cxx_destruct;

@end
