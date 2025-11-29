@class NSString;

@interface AWEHomePageBubbleBigLabelContent : NSObject <AWEHomePageBubbleContentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getHideAnimationWithView:(id)a0;
+ (id)getShowAnimationWithView:(id)a0;

- (id)getContentViewWithConfig:(id)a0;
- (id)getCustomBubbleConfig;

@end
