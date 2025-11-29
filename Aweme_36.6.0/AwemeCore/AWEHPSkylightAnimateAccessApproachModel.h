@class AWEHPSkylightUIConfig, NSString, CAMediaTimingFunction;

@interface AWEHPSkylightAnimateAccessApproachModel : NSObject <AWEHPSkylightAnimateAccessApproachModelProtocol>

@property (nonatomic) long long eventType;
@property (nonatomic) long long animateType;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CAMediaTimingFunction *animationFunction;
@property (retain, nonatomic) AWEHPSkylightUIConfig *intentExpandedUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
