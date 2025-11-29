@class NSString, AWELiveVSStartHighlight;

@interface AWELiveVSShowDistributionInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *recommendText;
@property (retain, nonatomic) AWELiveVSStartHighlight *modelMatchedHl;

+ (id)modelMatchedHlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
