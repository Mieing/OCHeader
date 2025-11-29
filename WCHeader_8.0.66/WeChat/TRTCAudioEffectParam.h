@class NSString;

@interface TRTCAudioEffectParam : NSObject

@property (nonatomic) int effectId;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) int loopCount;
@property (nonatomic) BOOL publish;
@property (nonatomic) int volume;

- (id)initWith:(int)a0 path:(id)a1;
- (void).cxx_destruct;

@end
