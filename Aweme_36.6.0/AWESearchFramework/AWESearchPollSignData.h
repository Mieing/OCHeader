@class NSString;

@interface AWESearchPollSignData : AWEBaseApiModel

@property (nonatomic) BOOL isSync;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
