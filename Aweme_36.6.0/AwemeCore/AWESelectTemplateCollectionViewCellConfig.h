@class UIColor, NSString;

@interface AWESelectTemplateCollectionViewCellConfig : NSObject

@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (retain, nonatomic) UIColor *unselectedBorderColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *unselectedTextColor;
@property (retain, nonatomic) NSString *noneTemplateIconName;
@property (nonatomic) long long noneTemplateIconSize;
@property (retain, nonatomic) NSString *noneTemplateText;
@property (nonatomic) BOOL shouldShowNewEditEntrance;
@property (nonatomic) BOOL shouldHideSelectedMaskView;
@property (nonatomic) BOOL shouldAnimateSelectedState;
@property (nonatomic) double templateCellCorderRadius;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL useUnifyStyle;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
