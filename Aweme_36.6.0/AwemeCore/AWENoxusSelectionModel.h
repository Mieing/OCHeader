@class NSString, NSNumber;

@interface AWENoxusSelectionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long seq;
@property (nonatomic) unsigned long long subscriptStatus;
@property (copy, nonatomic) NSNumber *episode;
@property (nonatomic) BOOL isFocused;
@property (nonatomic) BOOL isLanscape;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
