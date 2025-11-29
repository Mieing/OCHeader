@interface IESLiveGiftPlayerSamplerTimingNode : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) double timing;

+ (id)nodeWithIndex:(unsigned long long)a0 timing:(double)a1;

@end
