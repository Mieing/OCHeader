@class NSString, TextViewData, PaddingStyle, ListViewData, ControlInfo;

@interface DialogListBasedHalfPage : WXPBGeneratedMessage

@property (nonatomic) int navBarStyle;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) ListViewData *content;
@property (retain, nonatomic) PaddingStyle *contentPadding;
@property (retain, nonatomic) ControlInfo *closeModalControlInfo;

+ (void)initialize;

@end
