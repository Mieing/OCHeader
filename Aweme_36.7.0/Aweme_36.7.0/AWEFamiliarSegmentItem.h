@class NSString, NSAttributedString;

@interface AWEFamiliarSegmentItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) BOOL shouldShowYellowDot;
@property (nonatomic) BOOL shouldShowDropDownArrow;

- (void)syncWithItem:(id)a0;
- (void).cxx_destruct;

@end
