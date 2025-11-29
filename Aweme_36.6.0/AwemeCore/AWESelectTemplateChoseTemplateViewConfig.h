@class UIColor;

@interface AWESelectTemplateChoseTemplateViewConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *avatarBGColor;
@property (nonatomic) BOOL useUnifyStyle;
@property (nonatomic) double collectionTopOffset;
@property (nonatomic) double sectionXInset;
@property (nonatomic) double sectionYInset;
@property (nonatomic) double cellItemSpacing;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHeight;
@property (nonatomic) double authorLabelMaxWidth;
@property (nonatomic) double titleLabelTopPadding;
@property (nonatomic) double titleLabelHeight;
@property (nonatomic) double complianceNoticeButtonWidthHeight;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
