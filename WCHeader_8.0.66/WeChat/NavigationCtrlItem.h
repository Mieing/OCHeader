@class TextViewData, ImageViewData;

@interface NavigationCtrlItem : WXPBGeneratedMessage

@property (retain, nonatomic) ImageViewData *image;
@property (retain, nonatomic) TextViewData *text;
@property (nonatomic) int type;

+ (void)initialize;

@end
