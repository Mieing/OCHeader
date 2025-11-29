@class IESLiveGuideBubbleArrowView, NSString, UILabel, UIView, MASConstraint;

@interface IESLiveGuideToolBarBubbleView : UIView

@property (retain, nonatomic) IESLiveGuideBubbleArrowView *arrowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) MASConstraint *centerXConstraint;
@property (nonatomic) double arrowCenterX;
@property (readonly, nonatomic) NSString *title;

- (double)getTextWidth:(id)a0;
- (void)showOnSuperview:(id)a0 attachView:(id)a1;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)setupViews;

@end
