@class NSString;

@interface FinderCoverScalingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) unsigned int coverType;
@property (nonatomic) float upPercentPosition;
@property (nonatomic) float downPercentPosition;
@property (nonatomic) float frameHeight;
@property (nonatomic) float frameWidth;

+ (void)initialize;

- (void)setFrameWidth:(float)a0;
- (float)frameWidth;
- (void)setFrameHeight:(float)a0;
- (float)frameHeight;
- (void)setDownPercentPosition:(float)a0;
- (float)downPercentPosition;
- (void)setUpPercentPosition:(float)a0;
- (float)upPercentPosition;
- (void)setCoverType:(unsigned int)a0;
- (unsigned int)coverType;
- (void)setIsSplitScreen:(BOOL)a0;
- (BOOL)isSplitScreen;
- (void)setVersion:(id)a0;
- (id)version;

@end
