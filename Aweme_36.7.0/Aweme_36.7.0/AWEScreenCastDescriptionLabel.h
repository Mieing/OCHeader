@interface AWEScreenCastDescriptionLabel : YYLabel

@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isAccessibilityTraitButton;
@property (copy, nonatomic) id /* block */ touchBeganBlock;
@property (copy, nonatomic) id /* block */ touchCancelBlock;
@property (copy, nonatomic) id /* block */ hitTestBlock;

- (void).cxx_destruct;

@end
