@class NSString, NSArray, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardPlaceHolderTextContentIconModel : BDPCDDynamicCardPlaceHolderTextContentModel

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *emoji;
@property (copy, nonatomic) NSArray *margin;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
