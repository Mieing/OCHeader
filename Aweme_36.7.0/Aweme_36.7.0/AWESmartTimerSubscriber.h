@class NSString, NSTimer;

@interface AWESmartTimerSubscriber : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) long long selectorParaCount;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSString *runLoopMode;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSTimer *originalTimer;
@property (nonatomic) long long tickCount;
@property (nonatomic) long long gcdCount;
@property (retain, nonatomic) NSString *descriptionString;

- (void).cxx_destruct;
- (id)description;

@end
