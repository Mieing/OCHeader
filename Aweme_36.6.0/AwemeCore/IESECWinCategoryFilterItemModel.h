@class NSString, IESECWinCategoryFilterTextModel;

@interface IESECWinCategoryFilterItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECWinCategoryFilterTextModel *prefix;
@property (retain, nonatomic) IESECWinCategoryFilterTextModel *title;
@property (retain, nonatomic) IESECWinCategoryFilterTextModel *suffix;
@property (copy, nonatomic) NSString *bgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
