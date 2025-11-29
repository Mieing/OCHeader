@class UIImage, UIView;

@interface WAProfileRatingView : UIControl {
    UIView *_starBackgroundView;
    UIView *_starForegroundView;
}

@property (nonatomic) unsigned int numberOfStar;
@property (nonatomic) float score;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) double elementHeight;
@property (nonatomic) double elementWidth;
@property (nonatomic) double elementMargin;
@property (nonatomic) BOOL isHandleTouch;
@property (nonatomic) BOOL isUpdateProcess;
@property (retain, nonatomic) UIImage *forgroundImage;
@property (retain, nonatomic) UIImage *backgroundImage;

- (id)init;
- (id)initWithNumberOfStar:(unsigned int)a0;
- (void)sizeToFit;
- (double)widthForCompleteNum:(float)a0 randomNum:(float)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)updateScoreWithTouch:(id)a0 hasNotify:(BOOL)a1;
- (void)setScore:(float)a0 withAnimation:(BOOL)a1;
- (void)setScore:(float)a0 withAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateForegroundView;
- (void).cxx_destruct;

@end
