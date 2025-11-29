@class NSArray, UIImageView, UILabel, NSLayoutConstraint, UIButton;
@protocol CustomEmoticonPostEmotionViewDelegate;

@interface EmoticonCustomPostEmotionView : UICollectionReusableView

@property (retain, nonatomic) UILabel *postWordingLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *postButton;
@property (retain, nonatomic) UIImageView *thumbView1;
@property (retain, nonatomic) UIImageView *thumbView2;
@property (retain, nonatomic) NSArray *postEmoticonMd5s;
@property (nonatomic) float postWordingLabelLeftOffset;
@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;
@property (weak, nonatomic) id<CustomEmoticonPostEmotionViewDelegate> delegate;

- (void)layoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)initView;
- (void)addPostEmoticons:(id)a0;
- (void)initThumbView;
- (void)initPostWordingLabel;
- (void)initPostButton;
- (void)initCloseButton;
- (void)onClickClose;
- (void)onPostEvent;
- (void)postButtonTouchDown:(id)a0;
- (void)postButtonTouchUp:(id)a0;
- (void).cxx_destruct;

@end
