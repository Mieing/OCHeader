@class NSString, NSMutableArray;

@interface AFDFeedListPreloadCachesModel : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableArray *preloadedFeeds;
@property (copy, nonatomic) NSString *preloadUserID;
@property (retain, nonatomic) NSMutableArray *invalidAwemeIds;
@property (nonatomic) double cacheSavedTime;
@property (nonatomic) BOOL isFeedUnreadCaches;

- (id)initWithDataSource:(id)a0 byUserID:(id)a1;
- (BOOL)updatePreloadedFeedsWithInvalidAwemeID:(id)a0;
- (void)clearPreloadList;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;

@end
