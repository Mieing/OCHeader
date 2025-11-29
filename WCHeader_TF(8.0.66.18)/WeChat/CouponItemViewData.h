@class NSString, TextViewData, NSMutableArray;

@interface CouponItemViewData : WXPBGeneratedMessage

@property (nonatomic) int state;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) NSMutableArray *subTitle;
@property (retain, nonatomic) NSMutableArray *selectedSubTitle;
@property (retain, nonatomic) NSString *favId;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
