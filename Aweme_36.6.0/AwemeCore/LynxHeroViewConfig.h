@class NSString, LynxHeroModifiers, LynxAnimationInfo, LynxUI, UIView;

@interface LynxHeroViewConfig : NSObject

@property (copy, nonatomic) NSString *sharedElementName;
@property (nonatomic) BOOL crossPage;
@property (retain, nonatomic) LynxHeroModifiers *sharedElementModifiers;
@property (copy, nonatomic) LynxAnimationInfo *enterTransitionName;
@property (copy, nonatomic) LynxAnimationInfo *exitTransitionName;
@property (copy, nonatomic) LynxAnimationInfo *pauseTransiitonName;
@property (copy, nonatomic) LynxAnimationInfo *resumeTransitionName;
@property (retain, nonatomic) LynxHeroModifiers *enterTransitionModifiers;
@property (retain, nonatomic) LynxHeroModifiers *exitTransitionModifiers;
@property (nonatomic) BOOL snapshot;
@property (nonatomic) BOOL merge;
@property (weak, nonatomic) LynxUI *lynxUI;
@property (readonly, weak, nonatomic) UIView *view;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
