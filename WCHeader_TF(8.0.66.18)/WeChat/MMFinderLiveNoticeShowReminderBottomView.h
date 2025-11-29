@class NSString, MMUILabel, MMUIImageView;

@interface MMFinderLiveNoticeShowReminderBottomView : MMUIButton

@property (retain, nonatomic) MMUILabel *topLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMUIImageView *arrowView;
@property (retain, nonatomic) NSString *topContent;
@property (nonatomic) int selectType;
@property (nonatomic) BOOL showArr;

- (void)updateSelectType:(int)a0 showArr:(BOOL)a1 topContent:(id)a2;
- (BOOL)isAuto;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
