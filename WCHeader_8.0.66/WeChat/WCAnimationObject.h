@interface WCAnimationObject : NSObject

@property (nonatomic) double m_duration;
@property (nonatomic) double m_delay;
@property (nonatomic) unsigned long long m_options;
@property (copy, nonatomic) id /* block */ m_animations;
@property (copy, nonatomic) id /* block */ m_completion;

- (void).cxx_destruct;

@end
