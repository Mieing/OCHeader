@class AVAsset;

@interface IESMMStoryConfig : NSObject

@property (nonatomic) long long storyMode;
@property (nonatomic) double recordFrameRate;
@property (nonatomic) double videoScale;
@property (nonatomic) double loopCount;
@property (retain, nonatomic) AVAsset *reverseAsset;

- (void).cxx_destruct;
- (id)init;

@end
