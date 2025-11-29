@class NSString, IESECURLModel;

@interface IESECShopServiceEntryInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESECURLModel *icon;
@property (nonatomic) long long shouldShowInNavbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
