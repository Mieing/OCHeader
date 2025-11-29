@interface WCCanvasComponentFloatActionButtonInfo : WCCanvasComponentFloatActionBaseInfo

@property (nonatomic) double appearPaddingTop;
@property (nonatomic) double appearPaddingBottom;
@property (nonatomic) BOOL onlyShowInTimelineAd;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
