@class NSString, IESECURLModel;

@interface IESECShopTabBadgeInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long badgeType;
@property (copy, nonatomic) NSString *badgeMessage;
@property (nonatomic) unsigned long long badgeIconType;
@property (retain, nonatomic) IESECURLModel *badgeIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
