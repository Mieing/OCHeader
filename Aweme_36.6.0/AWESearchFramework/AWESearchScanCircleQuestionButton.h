@class NSString, AWESearchScanCircleEditViewSugQuery, UIView;

@interface AWESearchScanCircleQuestionButton : UIButton

@property (retain, nonatomic) UIView *backgroundBlurView;
@property (copy, nonatomic) NSString *questionTitle;
@property (retain, nonatomic) AWESearchScanCircleEditViewSugQuery *sugQuery;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)updateWithTitle:(id)a0;

@end
