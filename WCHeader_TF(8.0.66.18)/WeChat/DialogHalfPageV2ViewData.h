@class NSString, TextViewData, ButtonViewData;

@interface DialogHalfPageV2ViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *content;
@property (retain, nonatomic) ButtonViewData *leftButton;
@property (retain, nonatomic) ButtonViewData *rightButton;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
