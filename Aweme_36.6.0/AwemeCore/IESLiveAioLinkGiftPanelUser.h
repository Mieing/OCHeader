@class NSString, NSDictionary;

@interface IESLiveAioLinkGiftPanelUser : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSDictionary *groupExtraInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
