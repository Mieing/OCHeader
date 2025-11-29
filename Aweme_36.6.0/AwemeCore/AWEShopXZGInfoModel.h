@class NSString, AWEURLModel;

@interface AWEShopXZGInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *titleIcon;
@property (copy, nonatomic) NSString *defaultText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
