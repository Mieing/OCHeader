@class NSArray, UIImageView, AWEEditStickerBubbleViewCell, UIView, NSString, UITableView;

@interface AWEEditStickerBubbleView : UIView <AWEEditStickerBubbleProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly, nonatomic) double calcMaxWidth;
@property (copy, nonatomic) NSArray *transformedRectCornerPoints;
@property (nonatomic) BOOL isUpsideDown;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } anchorViewTransform;
@property (nonatomic) double arrowOffset;
@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) AWEEditStickerBubbleViewCell *shakeAniCell;
@property (nonatomic) struct CGPoint { double x; double y; } touchPoint;
@property (nonatomic, getter=isBubbleVisible) BOOL bubbleVisible;
@property (nonatomic) unsigned long long arrowDirection;
@property (copy, nonatomic) NSArray *bubbleItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBubbleVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 touchPoint:(struct CGPoint { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 inParentView:(id)a3;
- (struct CGPoint { double x0; double x1; })fixBubbleLocation;
- (struct CGPoint { double x0; double x1; })mockAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forDirection:(unsigned long long)a1;
- (id)getTransformedFloatsOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)updateArrowDirection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })parentViewFrame;
- (struct CGPoint { double x0; double x1; })getShowLocation;
- (struct CGPoint { double x0; double x1; })fixBubbleLocationWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)musicButtonBottom;
- (BOOL)noEnoughSpaceForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)noSpaceLeft;
- (struct CGPoint { double x0; double x1; })fixBubbleHorizontalLocationWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })fixBubbleVerticalLocationWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)getRotateRectWidth;
- (double)getRotateYOffsetWith:(double)a0;
- (double)getRotateXOffsetWith:(double)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)update;
- (void)setupUI;

@end
