@class NSString;

@interface IESGCPLoadPerfObject : NSObject

@property (retain, nonatomic) NSString *kind;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double duration;

- (id)initWithKind:(id)a0 beginTime:(double)a1;
- (void).cxx_destruct;

@end
