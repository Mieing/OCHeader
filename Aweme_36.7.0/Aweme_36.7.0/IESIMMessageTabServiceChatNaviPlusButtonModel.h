@class NSString, NSDictionary;

@interface IESIMMessageTabServiceChatNaviPlusButtonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long menuType;
@property (copy, nonatomic) NSString *showText;
@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *mobExt;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *redPointInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
