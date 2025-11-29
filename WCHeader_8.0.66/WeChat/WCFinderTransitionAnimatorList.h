@class NSString, NSMutableArray, WCFinderTransitionUserInfo;

@interface WCFinderTransitionAnimatorList : NSObject

@property (retain, nonatomic) NSMutableArray *animators;
@property (nonatomic) BOOL keepPlay;
@property (retain, nonatomic) NSString *passPlayerTid;
@property (readonly, nonatomic) BOOL closeAsCard;
@property (readonly, nonatomic) BOOL dragDownClose;
@property (readonly, nonatomic) BOOL pinBackView;
@property (nonatomic) long long animateType;
@property (retain, nonatomic) WCFinderTransitionUserInfo *userInfo;

+ (id)newWithCount:(long long)a0 animators:(id)a1;

- (void)onAnimationPrepare;
- (BOOL)_checkKeepPlay;
- (id)_checkPassPlayerTid;
- (BOOL)hasAnimator;
- (void)onAnimationCleanUp:(BOOL)a0;
- (id)fetchPerformAnimator:(id)a0;
- (id)_fetchPerformAnimator:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
