@class NSString;

@interface AWEIMConversationDynamicSettingModel : MTLModel <MTLJSONSerializing, AWEIMConversationDynamicSettingModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *iconDark;
@property (copy, nonatomic) NSString *iconLight;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *showIconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
