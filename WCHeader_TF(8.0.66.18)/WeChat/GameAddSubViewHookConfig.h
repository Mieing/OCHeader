@class NSString, CADisplayLink, UIView;

@interface GameAddSubViewHookConfig : NSObject

@property (retain, nonatomic) NSString *hookClsName;
@property (nonatomic) double delaySeconds;
@property (nonatomic) double top;
@property (nonatomic) BOOL enableHook;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) CADisplayLink *displayLink;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
