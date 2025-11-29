@class NSString, NSArray;

@interface BDUGLuckyAdTrackXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *trackLabel;
@property (copy, nonatomic) NSArray *urls;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
