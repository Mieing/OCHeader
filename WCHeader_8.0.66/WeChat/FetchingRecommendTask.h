@class NSString, NSArray, WCFinderBaseCgi;

@interface FetchingRecommendTask : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) WCFinderBaseCgi *fetchRelatedListCgi;
@property (retain, nonatomic) NSArray *fetchRelatedList;

- (id)description;
- (void)clean;
- (void).cxx_destruct;

@end
