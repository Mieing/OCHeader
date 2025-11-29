@class NSString;

@interface WCFinderCustomBusinessFeedIDModel : NSObject

@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) BOOL lastFeed;
@property (nonatomic) BOOL fetchYet;
@property (nonatomic) BOOL isUpContent;

- (void).cxx_destruct;

@end
