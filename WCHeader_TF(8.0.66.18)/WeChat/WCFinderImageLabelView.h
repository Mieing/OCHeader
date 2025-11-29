@class RichTextView, MMWebImageView;
@protocol WCFinderImageLabelViewDelegate;

@interface WCFinderImageLabelView : UIView

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) RichTextView *textView;
@property (weak, nonatomic) id<WCFinderImageLabelViewDelegate> delegate;
@property (retain, nonatomic) id dataSource;

+ (double)getHeightByIconHeight:(double)a0;

- (id)initWithWidth:(double)a0 iconHeight:(double)a1;
- (void)resetReuseState;
- (void)udpateIconImageViewHeight:(double)a0;
- (void)onClickAction;
- (void)updateWithIconUrl:(id)a0 content:(id)a1 width:(double)a2;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
