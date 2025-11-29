@class NSString, AWEURLModel;

@interface MinorInterestChannel : AWEBaseApiModel

@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *channelName;
@property (retain, nonatomic) AWEURLModel *icon;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
