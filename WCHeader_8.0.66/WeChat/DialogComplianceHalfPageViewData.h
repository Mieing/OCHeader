@class NSString, ButtonViewData, TextViewData, ImageViewData, NSMutableArray;

@interface DialogComplianceHalfPageViewData : WXPBGeneratedMessage

@property (nonatomic) BOOL showCloseButton;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) ImageViewData *logo;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) NSMutableArray *content;
@property (nonatomic) BOOL contentListStyle;
@property (nonatomic) int contentAlign;
@property (retain, nonatomic) ButtonViewData *leftButton;
@property (retain, nonatomic) ButtonViewData *rightButton;
@property (retain, nonatomic) TextViewData *bottomText;

+ (void)initialize;

@end
