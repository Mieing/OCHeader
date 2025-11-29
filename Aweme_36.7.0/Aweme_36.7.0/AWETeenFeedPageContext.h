@class NSString, AWETeenExtraParamModel;

@interface AWETeenFeedPageContext : AWEPageContext

@property (nonatomic) long long vcType;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (copy, nonatomic) NSString *albumEnterFrom;

- (void).cxx_destruct;

@end
