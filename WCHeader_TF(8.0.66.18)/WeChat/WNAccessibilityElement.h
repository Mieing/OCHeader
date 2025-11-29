@class RTEAttachmentView;
@protocol WNAccessibilityElementDelegate;

@interface WNAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id<WNAccessibilityElementDelegate> delegate;
@property (nonatomic) unsigned long long focusLocation;
@property (weak, nonatomic) RTEAttachmentView *attachmentView;

- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
