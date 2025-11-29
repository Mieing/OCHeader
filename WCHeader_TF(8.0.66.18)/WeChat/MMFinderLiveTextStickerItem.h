@class NSString, UIColor, MMFinderLiveStickerTextTemplateItem;

@interface MMFinderLiveTextStickerItem : MMFinderLiveStickerItemBase

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) MMFinderLiveStickerTextTemplateItem *selectedTemplate;

- (unsigned long long)stickerType;
- (BOOL)isStub;
- (id)stickerAccessibilityDescriptor;
- (BOOL)isContentEqualTo:(id)a0;
- (id)createReviewSubmissionItem;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
