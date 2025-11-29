@class NSString;

@interface IESECWinLivingAnchorBottomModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long targetTabType;
@property (copy, nonatomic) NSString *targetCategory;
@property (copy, nonatomic) NSString *targetSubCategory;
@property (nonatomic) unsigned long long sortType;
@property (copy, nonatomic) NSString *bottomText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
