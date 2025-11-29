@protocol WCAdDynamicFeedBackgroundButtonDelegate;

@interface WCAdDynamicFeedBackgroundButton : MMUIButton

@property (weak, nonatomic) id<WCAdDynamicFeedBackgroundButtonDelegate> delegate;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
