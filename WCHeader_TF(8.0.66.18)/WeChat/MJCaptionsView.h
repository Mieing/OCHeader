@class NSArray;

@interface MJCaptionsView : UIView

@property (retain, nonatomic) NSArray *captionItems;
@property (nonatomic) struct map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>> { struct __tree<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>, std::allocator<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>> { unsigned long long __value_; } __pair3_; } __tree_; } labelsByCaptionItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutCaptionLabels;
- (void)updateWithCaptionItems:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
