@class UIImageView, UILabel, UIView;

@interface DVEStickerDeleteView : UIView

@property (retain, nonatomic) UIView *corView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)onDeleteActived;
- (void)onDeleteInActived;
- (void)updateTrashButtonWithState:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)layoutSubviews;

@end
