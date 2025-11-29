@class NSString, NSDictionary;

@interface IESECSendMessage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *msgID;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *msgType;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *bizMsgID;
@property (copy, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
