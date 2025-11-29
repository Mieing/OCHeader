@class NSString, IESECURLModel;

@interface IESECShopTabStyleInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *tabIcon;
@property (retain, nonatomic) IESECURLModel *selectedTabIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
