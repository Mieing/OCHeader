@class NSString, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardPlaceHolderTextContentLinkModel : BDPCDDynamicCardPlaceHolderTextContentModel

@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *textContent;
@property (nonatomic) BOOL underLine;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
