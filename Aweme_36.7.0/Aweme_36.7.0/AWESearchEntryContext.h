@class NSString, NSDictionary;

@interface AWESearchEntryContext : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *urlQueryParams;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *currentVideoInfo;
@property (nonatomic) BOOL gsTouchPrefetch;
@property (nonatomic) BOOL isMiddlePrelayout;
@property (nonatomic) double touchBeganTime;
@property (nonatomic) double touchEndTime;

- (void).cxx_destruct;

@end
