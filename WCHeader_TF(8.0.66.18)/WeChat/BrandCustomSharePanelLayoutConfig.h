@interface BrandCustomSharePanelLayoutConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double itemEdgeInset;
@property (nonatomic) double minimumItemSpacing;
@property (nonatomic) double itemLineSpacing;
@property (nonatomic) double headerSpacing;
@property (nonatomic) double footerSpacing;
@property (nonatomic) double sectionSpacing;

+ (id)standardConfig;

@end
