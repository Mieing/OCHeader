@class NSString, TextViewData, NSMutableArray;

@interface ItemSectionViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *topTitle;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) TextViewData *bottomTitle;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
