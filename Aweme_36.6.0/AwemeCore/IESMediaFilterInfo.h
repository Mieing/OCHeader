@class NSString, IESMMVideoTransformInfo;

@interface IESMediaFilterInfo : NSObject {
    NSString *resourcePath;
    long long filterType;
}

@property (readonly, copy, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) long long filterType;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } effectRange;
@property (retain, nonatomic) IESMMVideoTransformInfo *transFormInfo;
@property (nonatomic) BOOL isOverlap;
@property (nonatomic) double duration;
@property (nonatomic) double overlapDuration;

- (id)initWithResourcePath:(id)a0 isOverlap:(BOOL)a1;
- (id)initWithDict:(id)a0 fileFolder:(id)a1;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)toDict;

@end
