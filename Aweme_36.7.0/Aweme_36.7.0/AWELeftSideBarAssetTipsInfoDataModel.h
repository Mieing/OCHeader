@class NSString;

@interface AWELeftSideBarAssetTipsInfoDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long dotType;
@property (copy, nonatomic) NSString *dotDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
