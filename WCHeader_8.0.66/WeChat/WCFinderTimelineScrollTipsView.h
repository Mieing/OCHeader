@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface WCFinderTimelineScrollTipsView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) id /* block */ clickAction;

+ (id)tipsViewWithTips:(id)a0 imageName:(id)a1 maxWidth:(double)a2;

- (void)setUpWithTips:(id)a0 imageName:(id)a1 maxWidth:(double)a2;
- (void)clickTipsAction;
- (void).cxx_destruct;

@end
