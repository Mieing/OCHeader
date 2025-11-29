@class BDPCDDynamicCardPlaceHolderTextContentLinkModel, BDPCDDynamicCardCustomActionModel, BDPCDDynamicCardPlaceHolderTextContentIconModel, NSAttributedString;

@interface BDPCDDynamicCardPlaceHolderSuffixContentModel : NSObject

@property (retain, nonatomic) BDPCDDynamicCardPlaceHolderTextContentLinkModel *textContentModel;
@property (retain, nonatomic) BDPCDDynamicCardPlaceHolderTextContentIconModel *iconContentModel;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;
@property (copy) NSAttributedString *calculatedAttributedString;
@property (copy) NSAttributedString *textAttributedString;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
