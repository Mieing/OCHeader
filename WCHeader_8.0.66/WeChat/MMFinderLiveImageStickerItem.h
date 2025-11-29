@interface MMFinderLiveImageStickerItem : MMFinderLiveStickerItemBase

- (unsigned long long)stickerType;
- (BOOL)isStub;
- (id)stickerAccessibilityDescriptor;
- (BOOL)isContentEqualTo:(id)a0;
- (id)createReviewSubmissionItem;

@end
