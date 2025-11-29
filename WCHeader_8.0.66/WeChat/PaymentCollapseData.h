@class TextViewData, NSMutableArray;

@interface PaymentCollapseData : WXPBGeneratedMessage

@property (nonatomic) BOOL isShowCollapse;
@property (nonatomic) BOOL isDefaultCollapse;
@property (retain, nonatomic) TextViewData *collapseDesc;
@property (retain, nonatomic) NSMutableArray *collapseCard;
@property (retain, nonatomic) NSMutableArray *collapseNewCard;

+ (void)initialize;

@end
