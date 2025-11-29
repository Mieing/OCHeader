@interface AWENearbyHalfScreenPerfConfig : NSObject

@property (nonatomic) double feedRenderDelayTimeOut;
@property (nonatomic) double transformerRenderDelayTimeOut;
@property (nonatomic) BOOL enableTransformerRenderDelay;
@property (nonatomic) BOOL enableFeedRenderDelay;
@property (nonatomic) BOOL enableOpenAhead;
@property (nonatomic) BOOL enableContainerOpenAhead;
@property (nonatomic) BOOL disableTransformerCache;
@property (nonatomic) BOOL disableFeedCache;

@end
