@class CAShapeLayer, UIImageView, UIView, UILabel;
@protocol IESLiveAnnouncementStickerViewProtocol;

@interface IESLivePreAnnouncementDragJudgeUtil : NSObject

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CAShapeLayer *dottedLineBorder;
@property (retain, nonatomic) UIView *topGreyView;
@property (retain, nonatomic) UIView *bottomGreyView;
@property (retain, nonatomic) UIImageView *deleteIconView;
@property (retain, nonatomic) UILabel *deleteTip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } borderViewFrame;
@property (nonatomic) struct CGPoint { double x; double y; } currentPosition;
@property (nonatomic) struct CGPoint { double x; double y; } lastRatioPoint;
@property (weak, nonatomic) UIView<IESLiveAnnouncementStickerViewProtocol> *announcementView;
@property (nonatomic) struct CGPoint { double x; double y; } lastPosition;

- (void)panAction:(id)a0;
- (BOOL)isOnlyXPan;
- (struct CGPoint { double x0; double x1; })checkPosition:(struct CGPoint { double x0; double x1; })a0 editMode:(BOOL)a1;
- (void)enterEditStyle;
- (void)exitEditStyle;
- (void)sendNewPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithAnnouncementView:(id)a0;
- (void)showWithNode;
- (void)updateQuadrantPositon:(struct CGPoint { double x0; double x1; })a0;
- (void)dragSucceed;
- (void)dragFail;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissAction;
- (void)setupUI;

@end
