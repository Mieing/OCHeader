@class WCAdPagView, WCAdURLImageView, MMUILabel, WCAdRockPaperScissorsInfo;
@protocol WCAdRockPaperScissorsTitleAreaDelegate;

@interface WCAdRockPaperScissorsTitleAreaView : UIView

@property (retain, nonatomic) WCAdRockPaperScissorsInfo *adRockPaperScissorsInfo;
@property (weak, nonatomic) id<WCAdRockPaperScissorsTitleAreaDelegate> delegate;
@property (retain, nonatomic) WCAdPagView *leftDecorPagView;
@property (retain, nonatomic) WCAdPagView *rightDecorPagView;
@property (retain, nonatomic) WCAdURLImageView *titleLeftIconView;
@property (retain, nonatomic) WCAdURLImageView *titleRightIconView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUILabel *descView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adRockPaperScissorsInfo:(id)a1 delegate:(id)a2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (double)fetchWidthWithHeight:(double)a0 oriWidth:(double)a1 oriHeight:(double)a2;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (id)fetchDescWording;
- (void)updateDescWording;
- (id)rockPaperScissorsLogic;
- (void).cxx_destruct;

@end
