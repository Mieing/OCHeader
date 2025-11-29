@class NSString;

@interface IESECWinGoodsFilterModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long filterType;
@property (copy, nonatomic) NSString *filterName;
@property (nonatomic) BOOL isChecked;
@property (copy, nonatomic) NSString *toolTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
