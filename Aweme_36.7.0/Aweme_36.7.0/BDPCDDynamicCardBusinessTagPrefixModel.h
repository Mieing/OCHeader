@class BDPCDDynamicCardBusinessTagTextModel, BDPCDDynamicCardBusinessTagImageModel;

@interface BDPCDDynamicCardBusinessTagPrefixModel : NSObject

@property (retain, nonatomic) BDPCDDynamicCardBusinessTagImageModel *imageModel;
@property (retain, nonatomic) BDPCDDynamicCardBusinessTagTextModel *textModel;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
