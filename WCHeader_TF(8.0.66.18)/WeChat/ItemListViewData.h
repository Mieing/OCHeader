@class NSString, TextViewData, NSMutableArray;

@interface ItemListViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
