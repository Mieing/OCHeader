@class AWEMVCardElementUIConfigModel, NSString;

@interface AWEMVCardUIConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEMVCardElementUIConfigModel *normalSmallCardConfig;
@property (retain, nonatomic) AWEMVCardElementUIConfigModel *normalLargeCardConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
