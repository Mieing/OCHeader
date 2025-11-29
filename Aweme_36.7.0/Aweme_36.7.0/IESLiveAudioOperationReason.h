@class NSSet, NSDictionary;

@interface IESLiveAudioOperationReason : IESLiveInteractAudioMonitorReason

@property (nonatomic) long long role;
@property (copy, nonatomic) NSSet *bizTags;
@property (copy, nonatomic) NSDictionary *bizContext;

+ (id)convertFromReason:(id)a0 role:(long long)a1 cert:(id)a2;
+ (id)convertFromReason:(id)a0 role:(long long)a1 cert:(id)a2 bizTags:(id)a3 bizContext:(id)a4;

- (id)initWithReason:(id)a0 role:(long long)a1 cert:(id)a2 bizTags:(id)a3 bizContext:(id)a4 callClassName:(id)a5 callMethodName:(id)a6;
- (void).cxx_destruct;
- (id)logString;

@end
