@class NSArray, UIFont, UIColor;

@interface AWEPayAnimateTextView : UIView

@property (copy, nonatomic) NSArray *charList;
@property (copy, nonatomic) NSArray *singleLabelList;
@property (nonatomic) double width;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double textAnimationTime;

- (void)p_generateLabelList;
- (id)p_generateStackView;
- (id)p_generateLabelWith:(id)a0;
- (void)refreshWithList:(id)a0;
- (void).cxx_destruct;

@end
