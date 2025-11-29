@interface AWETimerInfo : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) long long numberOfPara;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;

@end
