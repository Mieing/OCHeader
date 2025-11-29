@interface AWEDCFeedFallbackDataFetchConfig : AWEDCFeedBaseConfig

@property (copy, nonatomic) id /* block */ enable;
@property (copy, nonatomic) id /* block */ fetchFallbackData;

- (void).cxx_destruct;

@end
