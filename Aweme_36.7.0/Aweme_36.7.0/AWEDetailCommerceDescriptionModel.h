@class NSString;

@interface AWEDetailCommerceDescriptionModel : AWEDetailCommonDiffableModel <IGListDiffable>

@property (nonatomic) double bottomInset;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionContentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textLabelContentInsets;

- (void).cxx_destruct;

@end
