@class NSString;

@interface DVEAccessibilityService : NSObject <DVEAccessibilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityStringForSegmentView:(id)a0 withModel:(id)a1;
- (id)accessibilityStringForSegmentView:(id)a0;
- (id)accessibilityLabelForTransitionItem;

@end
