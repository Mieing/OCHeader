@class NSString, NSArray, UIView;

@interface WCAdvertiseAnimationDisplayLinkAnimationObject : NSObject

@property (nonatomic) BOOL isPersisted;
@property (nonatomic) BOOL didNoticeFinishedEvent;
@property (retain, nonatomic) NSString *animationKey;
@property (nonatomic) unsigned long long keyPath;
@property (weak, nonatomic) UIView *relatedView;
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSArray *keyTimes;
@property (copy, nonatomic) NSArray *timingFunctions;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;

@end
