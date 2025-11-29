@class NSString;

@interface FinderObjectScalingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) BOOL isDisableFollow;
@property (nonatomic) float upPercentPosition;
@property (nonatomic) float downPercentPosition;

+ (void)initialize;

- (void)setDownPercentPosition:(float)a0;
- (float)downPercentPosition;
- (void)setUpPercentPosition:(float)a0;
- (float)upPercentPosition;
- (void)setIsDisableFollow:(BOOL)a0;
- (BOOL)isDisableFollow;
- (void)setIsSplitScreen:(BOOL)a0;
- (BOOL)isSplitScreen;
- (void)setVersion:(id)a0;
- (id)version;

@end
