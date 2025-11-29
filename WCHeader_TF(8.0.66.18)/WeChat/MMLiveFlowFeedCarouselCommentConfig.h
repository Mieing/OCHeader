@class UIColor, UIFont;

@interface MMLiveFlowFeedCarouselCommentConfig : NSObject

@property (nonatomic) long long maxVisibleLines;
@property (nonatomic) double firstCommentDuration;
@property (nonatomic) double commentDuration;
@property (nonatomic) double normalLineAlpha;
@property (retain, nonatomic) UIFont *commentFont;
@property (retain, nonatomic) UIColor *commentTextColor;
@property (nonatomic) BOOL firstCommentAnimation;
@property (nonatomic) double commentSpacing;
@property (nonatomic) unsigned long long discardStrategy;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
