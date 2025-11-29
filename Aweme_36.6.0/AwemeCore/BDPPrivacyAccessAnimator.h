@class NSMutableDictionary, NSString, UIImageView, UIImage, NSSet, NSMutableArray, UIButton;

@interface BDPPrivacyAccessAnimator : NSObject <BDPPrivacyAccessManagerDelegate> {
    BOOL _isAnimating;
    UIImageView *_animationView;
    NSMutableArray *_animationList;
    long long _currentAnimation;
    NSSet *_animatingPrivacyIDs;
    NSMutableDictionary *_delayedPrivacyUpdateTimeDict;
}

@property (weak, nonatomic) UIButton *canvasView;
@property (retain, nonatomic) UIImage *originalImage;
@property (readonly, nonatomic) long long currentAnimatingPravicyID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
