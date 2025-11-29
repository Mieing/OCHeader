@class HTSLiveImage;

@interface LinkGameInfoExtra : IESLivePBBaseMessage

@property (nonatomic) long long gameGridLeft;
@property (nonatomic) long long gameGridTop;
@property (nonatomic) long long gameGridWidth;
@property (nonatomic) long long gameGridHeight;
@property (nonatomic) long long gameGridBottom;
@property (nonatomic) long long gameGridGravity;
@property (nonatomic) long long gameType;
@property (retain, nonatomic) HTSLiveImage *backImg;
@property (nonatomic) BOOL hasBackImg;

+ (id)descriptor;

@end
