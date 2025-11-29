@class NSString;

@interface MMListenFinderScaleInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) unsigned int coverType;
@property (nonatomic) float upPercentPosition;
@property (nonatomic) float downPercentPosition;
@property (nonatomic) float frameHeight;
@property (nonatomic) float frameWidth;

+ (void)initialize;

@end
