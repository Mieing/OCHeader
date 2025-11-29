@class UIColor, NSString, AWENearbyC2CellTagData, AWEURLModel;

@interface AWENearbyVideoTags : AWEBaseApiModel

@property (readonly, nonatomic) UIColor *tagBgColor;
@property (readonly, nonatomic) UIColor *tagBgColor;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWENearbyC2CellTagData *firstTag;
@property (retain, nonatomic) AWENearbyC2CellTagData *title;
@property (retain, nonatomic) AWEURLModel *backGround;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) double bgDegree;
@property (retain, nonatomic) AWEURLModel *splitUrl;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
