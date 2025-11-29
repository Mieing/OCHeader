@class UITapGestureRecognizer, NSString, UIImageView, UIView, UILabel, WCFinderJumpInfo;
@protocol WCFinderCommentControversyTipsViewDelegate;

@interface WCFinderCommentControversyTipsView : UIView <WCFinderJumpInfoViewProtocol>

@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (nonatomic) int showPosition;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) unsigned long long feedExposeTimestamp;
@property (nonatomic) unsigned long long viewExposeTimestamp;
@property (weak, nonatomic) id<WCFinderCommentControversyTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)tapAction:(id)a0;
- (void)doUpdateWithJumpInfo:(id)a0;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)startExposeAction;
- (void)setFeedExposeTime:(unsigned long long)a0;
- (unsigned long long)feedExposeTime;
- (unsigned long long)viewExposeTime;
- (void).cxx_destruct;

@end
