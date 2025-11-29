@interface TPPlayerContext : NSObject

@property (nonatomic) long long textureId;
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL firstFrameRendered;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videHeight;
@property (nonatomic) long long videoDuration;

+ (id)makeWithTextureId:(long long)a0 prepared:(BOOL)a1 firstFrameRendered:(BOOL)a2 videoWidth:(long long)a3 videHeight:(long long)a4 videoDuration:(long long)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
