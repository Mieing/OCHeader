@class AWENearbyC2CellTextData, NSArray, AWENearbyVideoTags;

@interface AWENearbyC2CellExpressData : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyC2CellTextData *title;
@property (retain, nonatomic) AWENearbyVideoTags *subTitle;
@property (copy, nonatomic) NSArray *bottom;

+ (BOOL)automaticallyDefaultMapping;
+ (id)bottomJSONTransformer;

- (void).cxx_destruct;

@end
