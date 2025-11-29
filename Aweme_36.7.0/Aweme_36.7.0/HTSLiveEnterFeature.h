@class NSString;

@interface HTSLiveEnterFeature : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) int times;
@property (nonatomic) int percent;
@property (nonatomic) int rank;
@property (nonatomic) BOOL preload;

+ (id)descriptor;

@end
