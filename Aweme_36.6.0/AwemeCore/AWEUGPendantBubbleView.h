@class UIColor, NSString, UILabel, UIView;
@protocol AWEUGPendantProgressProtocol;

@interface AWEUGPendantBubbleView : UIView <AWEUGPendantBubbleProtocol>

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIView<AWEUGPendantProgressProtocol> *contentView;
@property (nonatomic) double width;
@property (nonatomic) double titleWidth;
@property (nonatomic) double subtitleWidth;
@property (nonatomic) long long direction;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)expandTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subtitle:(id)a2;
- (void)calculateWidth;
- (void)presentBubbleViewWithModel:(id)a0 containerView:(id)a1 contentView:(id)a2 bubbleColor:(id)a3 duration:(long long)a4 inDirection:(long long)a5 completion:(id /* block */)a6;
- (void)setupUIWithModel:(id)a0 color:(id)a1;
- (void)highlightTitleIfNeeded:(id)a0;
- (void)expandBubbleView:(double)a0 height:(double)a1;
- (void)expandSubtitle;
- (void)dismissSubtitle;
- (id)getPlaceholderContent:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dismissTitle;

@end
