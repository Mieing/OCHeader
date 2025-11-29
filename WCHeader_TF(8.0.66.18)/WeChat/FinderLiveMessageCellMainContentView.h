@class NSArray, NSString;

@interface FinderLiveMessageCellMainContentView : UIView

@property (copy, nonatomic) NSArray *accessibilityElementArr;
@property (copy, nonatomic) NSString *accessibilityString;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
