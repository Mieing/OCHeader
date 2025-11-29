@class NSData;

@interface VEEffectPath : NSObject

@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;

+ (id)effectPathWithDic:(id)a0;

- (id)toDicInfo;
- (void).cxx_destruct;

@end
