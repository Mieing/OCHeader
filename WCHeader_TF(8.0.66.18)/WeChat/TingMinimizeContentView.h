@class MMWebImageView, MMUIButton;
@protocol TingMinimizeContentViewDelegate;

@interface TingMinimizeContentView : UIView

@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (retain, nonatomic) MMWebImageView *backgroundView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (weak, nonatomic) id<TingMinimizeContentViewDelegate> delegate;

- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImageURL:(id)a0;
- (void)onCloseButtonClicked;
- (void)onCoverClicked;
- (void).cxx_destruct;

@end
