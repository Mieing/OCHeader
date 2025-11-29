@class UILabel;

@interface AWESearchAIGCTimestampView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) UILabel *timestampLabel;

+ (id)converTimeStampToTextForChatV2:(double)a0;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)beforeDawnTimeFormatter;
+ (double)secondsForADay;
+ (id)p_getWeekStringFromWeekV2:(long long)a0;
+ (id)shortDateFormatterForD_V2;
+ (id)dateFormatterForD_V2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end
