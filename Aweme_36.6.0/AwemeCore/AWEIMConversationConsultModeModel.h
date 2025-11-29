@class NSString;

@interface AWEIMConversationConsultModeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasUrgeReplySwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
