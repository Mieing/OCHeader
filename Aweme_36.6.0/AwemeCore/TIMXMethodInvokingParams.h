@class NSString;

@interface TIMXMethodInvokingParams : NSObject

@property (retain, nonatomic) id caller;
@property (nonatomic) SEL selector;
@property (nonatomic) long long line;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) const char *queueLabel;

+ (id)methodInvokingParamsWithCaller:(id)a0 selector:(SEL)a1 line:(long long)a2;

- (id)initWithCaller:(id)a0 selector:(SEL)a1 line:(long long)a2;
- (void).cxx_destruct;

@end
