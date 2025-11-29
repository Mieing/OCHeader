@class NSArray, AWELeftSideBarModel;

@interface AWELeftSideBarMoreFunctionViewControllerParams : NSObject <NSCopying>

@property (copy, nonatomic) AWELeftSideBarModel *extraSideBarModel;
@property (nonatomic) unsigned long long numberOfColumn;
@property (nonatomic) long long themeStyle;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double moduleCornerRadius;
@property (nonatomic) unsigned long long footerViewStyle;
@property (copy, nonatomic) NSArray *gradientFooterColors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
