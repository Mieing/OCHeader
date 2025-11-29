@class NSString;

@interface ScalingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) float upPercentPosition;
@property (nonatomic) float downPercentPosition;

+ (void)initialize;

@end
