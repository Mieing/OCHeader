@protocol AWEIMEmoticonFullImageAlphaCollectionViewCellDelegate;

@interface AWEIMEmoticonFullImageAlphaCollectionViewCell : AWEIMEmoticonFullImageCollectionViewCell

@property (weak, nonatomic) id<AWEIMEmoticonFullImageAlphaCollectionViewCellDelegate> accessibilityDelegate;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)accessibilityElementDidBecomeFocused;

@end
