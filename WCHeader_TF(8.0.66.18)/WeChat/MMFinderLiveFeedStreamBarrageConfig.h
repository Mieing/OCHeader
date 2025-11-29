@class MMFinderLiveFeedStreamBarrageStyleConfig;

@interface MMFinderLiveFeedStreamBarrageConfig : NSObject

@property (nonatomic) double preContentWidth;
@property (nonatomic) double gap;
@property (nonatomic) double lineSpacing;
@property (nonatomic) unsigned long long lines;
@property (nonatomic) BOOL enableTouchAction;
@property (nonatomic) BOOL ignoreEmptyTouch;
@property (nonatomic) unsigned long long displayMilliseconds;
@property (retain, nonatomic) MMFinderLiveFeedStreamBarrageStyleConfig *styleConfig;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
