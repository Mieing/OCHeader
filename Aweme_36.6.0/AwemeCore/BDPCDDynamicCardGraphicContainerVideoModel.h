@class NSString;

@interface BDPCDDynamicCardGraphicContainerVideoModel : BDPCDDynamicCardAtomicModel

@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSString *vid;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
