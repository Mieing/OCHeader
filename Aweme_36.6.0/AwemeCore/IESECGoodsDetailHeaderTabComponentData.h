@class NSArray;

@interface IESECGoodsDetailHeaderTabComponentData : IESECBaseApiModel

@property (copy, nonatomic) NSArray *tabs;
@property (nonatomic) long long maxTabNum;
@property (nonatomic) BOOL newStyle;

+ (id)tabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)copyWithoutTabs;
- (BOOL)needFoldTabWhenSmallMode;
- (void).cxx_destruct;

@end
