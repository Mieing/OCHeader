@class UIFont;

@interface GCTextLayoutCommonInfo : GCDynamicLayoutProvider

@property (retain, nonatomic) UIFont *sysTitleFont;
@property (nonatomic) double sysTitleHeight;
@property (nonatomic) double sysTitleTopOffset;
@property (nonatomic) double sysTitleMarginWidth;
@property (nonatomic) double sysTitleToContentMargin;

- (id)init;
- (void).cxx_destruct;

@end
