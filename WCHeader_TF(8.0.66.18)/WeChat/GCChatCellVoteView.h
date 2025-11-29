@class NSMutableDictionary, UILabel, MMUIButton, UIView;

@interface GCChatCellVoteView : UIView

@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *voteTipLabel;
@property (retain, nonatomic) MMUIButton *rightLightImageBtn;
@property (retain, nonatomic) UIView *iconArrayContainerView;
@property (retain, nonatomic) NSMutableDictionary *userNameImgViewDict;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)cutRightWithHeadOffset:(double)a0 webImgView:(id)a1;
- (void)configureWithIconArray:(id)a0 tip:(id)a1;
- (void)configureIsVoteByMe:(BOOL)a0;
- (void)onUserDataDictUpdate:(id)a0;
- (void).cxx_destruct;

@end
