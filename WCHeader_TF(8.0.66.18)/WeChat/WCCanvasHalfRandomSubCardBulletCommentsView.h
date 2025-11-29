@class NSString, NSArray, NSMutableArray, MMUILabel;
@protocol WCCanvasHalfRandomSubCardBulletCommentsViewDelegate;

@interface WCCanvasHalfRandomSubCardBulletCommentsView : UIView

@property (weak, nonatomic) id<WCCanvasHalfRandomSubCardBulletCommentsViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *bulletComments;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *bulletCommentViews;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 bulletComments:(id)a2 delegate:(id)a3;
- (void)initSubViews;
- (void)layoutSubviews;
- (void)generateBulletCommentViews;
- (void)onBulletCommentButtonClicked:(id)a0;
- (id)fetchCanvasPageId;
- (id)fetchCanvasItemCardId;
- (int)fetchCanvasFinderCommentScene;
- (void).cxx_destruct;

@end
