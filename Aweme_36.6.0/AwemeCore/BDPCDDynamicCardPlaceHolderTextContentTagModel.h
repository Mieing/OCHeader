@class NSString, NSArray, BDPCDDynamicCardBorderModel, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardPlaceHolderTextContentTagModel : BDPCDDynamicCardPlaceHolderTextContentModel

@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSArray *borderRadius;
@property (retain, nonatomic) BDPCDDynamicCardBorderModel *border;
@property (copy, nonatomic) NSString *textContent;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
