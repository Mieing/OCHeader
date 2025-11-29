@class AWEHomePageBubbleConfig;

@interface AWEHomePageBubbleUtils : NSObject

@property (nonatomic) double maxBubbleLabelWidth;
@property (retain, nonatomic) AWEHomePageBubbleConfig *bubbleConfig;

+ (Class)aAWEHomepageBubbleConfigDOUYINDSAdapterClass;
+ (id)getAdaptFontWithDUXfontClass:(long long)a0 DUXFontWeight:(long long)a1;
+ (double)getAdaptFloat:(double)a0;
+ (double)getAdaptFloatContent:(double)a0 contentLength:(double)a1;
+ (id)sharedInstance;

- (id)getDefaultPlaceHolderWithSize:(struct CGSize { double x0; double x1; })a0 radius:(double)a1;
- (id)aAWEHomepageBubbleConfigDOUYINDSAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
