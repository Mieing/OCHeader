@class UIColor, NSString, NSDictionary, WAAllTouchRecognizer;

@interface WAScrollView : UIScrollView

@property (retain, nonatomic) NSDictionary *style;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) WAAllTouchRecognizer *allTouchGesgure;
@property (retain, nonatomic) NSString *userData;
@property (nonatomic) unsigned int viewId;

- (id)init;
- (void)setTouchDelegate:(id)a0;
- (void)layoutSubviews;
- (void)setViewStyle:(id)a0;
- (void).cxx_destruct;

@end
