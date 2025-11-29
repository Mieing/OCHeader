@class NSString, NSArray, HTSLiveAnimConfig, UIView;

@interface IESLiveRightBottomMutuallyExclusiveItem : NSObject

@property (nonatomic) long long priority;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) UIView *insertView;
@property (retain, nonatomic) NSArray *mutuallyExclusiveArr;
@property (nonatomic) long long stayWait;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL moveUpBanner;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (nonatomic) BOOL inContainerKitManage;
@property (retain, nonatomic) HTSLiveAnimConfig *animationConfig;
@property (weak, nonatomic) UIView *animationView;

- (void).cxx_destruct;
- (id)init;

@end
