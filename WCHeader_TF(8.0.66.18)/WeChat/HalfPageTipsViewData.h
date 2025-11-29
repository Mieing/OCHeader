@class ImageViewData, NSString, ButtonViewData, ListViewData, NSMutableArray, TextViewData, HalfPageTipsHeaderViewData, HalfPageTipsFooterViewData;

@interface HalfPageTipsViewData : WXPBGeneratedMessage

@property (retain, nonatomic) ButtonViewData *closeButton;
@property (retain, nonatomic) ImageViewData *logo;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *mainContent;
@property (retain, nonatomic) ListViewData *descList;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) HalfPageTipsHeaderViewData *header;
@property (retain, nonatomic) HalfPageTipsFooterViewData *footer;

+ (void)initialize;

@end
