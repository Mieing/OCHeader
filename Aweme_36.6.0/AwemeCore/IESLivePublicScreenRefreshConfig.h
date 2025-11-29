@interface IESLivePublicScreenRefreshConfig : NSObject

@property (nonatomic) long long refreshCount;
@property (nonatomic) double refreshDuration;
@property (nonatomic) unsigned long long priority;

- (id)initWithRefreshCount:(long long)a0 refreshDuration:(double)a1 priority:(unsigned long long)a2;

@end
