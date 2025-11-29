@class NSString, IESECURLModel;

@interface IESECTabKitTabBadgeConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) IESECURLModel *icon;
@property (nonatomic) unsigned long long number;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
