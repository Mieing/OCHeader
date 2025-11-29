@class NSString, NSNumber;

@interface AWENoxusSelectionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long seq;
@property (copy, nonatomic) NSNumber *episode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
