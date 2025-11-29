@class UIFont, NSArray, NSTimer, NSString, UIColor;
@protocol IESECShopSearchBarAnimationDelegate;

@interface IESECShopSearchBarPlaceholderAnimator : UIView

@property (retain, nonatomic) NSArray *placeholderArray;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long currentItemId;
@property (readonly, nonatomic) NSString *currentDisplayedWord;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<IESECShopSearchBarAnimationDelegate> delegate;

- (id)createCubicBezierAnimationWith:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)clear;
- (void)stop;
- (void)resume;

@end
