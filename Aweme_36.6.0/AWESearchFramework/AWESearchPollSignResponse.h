@class AWESearchPollSignData;

@interface AWESearchPollSignResponse : AWEBaseApiModel

@property (retain, nonatomic) AWESearchPollSignData *data;

+ (id)jsonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
