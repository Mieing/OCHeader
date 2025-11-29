@class NSString, NSArray;

@interface AWEFeedReplaceVideosConfigModel : NSObject

@property (copy, nonatomic) NSString *strategy;
@property (nonatomic) long long retainVideoCount;
@property (nonatomic) BOOL enableFilterSoftAd;
@property (nonatomic) BOOL enableFilterHardAd;
@property (nonatomic) BOOL enableFilterSpecialCard;
@property (copy, nonatomic) NSArray *filterAwemeTypeList;
@property (nonatomic) BOOL enableRequestWithoutMarketing;

- (void).cxx_destruct;
- (id)initWithConfigDict:(id)a0;

@end
