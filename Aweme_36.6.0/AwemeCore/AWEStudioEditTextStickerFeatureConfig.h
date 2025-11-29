@class NSNumber, NSArray;

@interface AWEStudioEditTextStickerFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL barItemVisible;
@property (copy, nonatomic) NSNumber *displayTextTemplateStyle;
@property (copy, nonatomic) NSArray *textStickerEditToolBarItems;
@property (copy, nonatomic) NSNumber *forceHideTextReadingBubbleItem;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
