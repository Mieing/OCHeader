@class IESMMVideoTransformBaseInfo;

@interface IESMMVideoTransformInfo : NSObject <NSCopying>

@property (nonatomic) float startTime;
@property (nonatomic) float duration;
@property (retain, nonatomic) IESMMVideoTransformBaseInfo *startTrasformInfo;
@property (retain, nonatomic) IESMMVideoTransformBaseInfo *endTransformInfo;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
