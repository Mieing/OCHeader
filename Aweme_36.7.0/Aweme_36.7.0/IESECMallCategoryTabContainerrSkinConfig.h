@class NSString;

@interface IESECMallCategoryTabContainerrSkinConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCustomized;
@property (nonatomic) unsigned long long skinStyle;
@property (copy, nonatomic) NSString *pageBGImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
