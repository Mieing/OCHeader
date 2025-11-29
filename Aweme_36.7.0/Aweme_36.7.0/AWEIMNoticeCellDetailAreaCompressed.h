@class AWEIMNoticeCellSeparateLineCompressed;

@interface AWEIMNoticeCellDetailAreaCompressed : AWEIMNoticeCellDetailArea

@property (retain, nonatomic) AWEIMNoticeCellSeparateLineCompressed *topSeparateLineCompressed;

+ (double)bottomAreaHeight;
+ (double)topSeparateLineHeight;
+ (double)jumpIconWidth;
+ (double)marginWidth;
+ (double)totalHeight;

- (void)configWithModel:(id)a0;
- (void)addSubviews;
- (id)topSeparateLine;
- (void).cxx_destruct;
- (void)addLayoutConstraints;

@end
