@class NSString;

@interface AWEHomePageBubbleFactory : NSObject <AWEHomePageBubbleFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getBubbleWithBubbleModel:(id)a0 targetView:(id)a1 targetPoint:(struct CGPoint { double x0; double x1; })a2 position:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })getBubbleContentSizeWithContentConfig:(id)a0;

@end
