@class NSString, TextViewData, ListViewData;

@interface FixedSizePanelViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) int navBarStyle;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *subTitle;
@property (retain, nonatomic) ListViewData *body;

+ (void)initialize;

@end
