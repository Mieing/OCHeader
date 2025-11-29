@class NSString, UIFont;

@interface CJPayInvestResultPayInfoViewRowData : NSObject

@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *iconUrlStr;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (retain, nonatomic) UIFont *font;

- (struct CGSize { double x0; double x1; })detailRectSize;
- (double)p_safeDistance;
- (void).cxx_destruct;
- (id)init;
- (double)rowHeight;

@end
