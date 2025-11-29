@class NSMutableArray, CADisplayLink;
@protocol WCTimeLineAdLookbookCardBrandNewAnimationDisplayLinkDelegate;

@interface WCTimeLineAdLookbookCardBrandNewAnimationDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *animationLink;
@property (retain, nonatomic) NSMutableArray *animationObjects;
@property (nonatomic) double timestamp;
@property (nonatomic) double animationCurrentTime;
@property (weak, nonatomic) id<WCTimeLineAdLookbookCardBrandNewAnimationDisplayLinkDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)handleDisplayLinkEvent:(id)a0;
- (void)getReady;
- (void)addAnimationObject:(id)a0;
- (void)startAnimations;
- (void)stopAnimations;
- (void)resetAnimations;
- (void)terminateAnimations;
- (void)persistAnimations;
- (void)setMaskToView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2;
- (void).cxx_destruct;

@end
