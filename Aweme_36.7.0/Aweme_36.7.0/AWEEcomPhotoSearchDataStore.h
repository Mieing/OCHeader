@class NSString, NSArray, NSMutableArray, NSNumber;

@interface AWEEcomPhotoSearchDataStore : NSObject

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSMutableArray *cachedViewModels;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long shownCount;
@property (nonatomic) long long section;
@property (nonatomic) long long moreProductButtonIndex;

- (void).cxx_destruct;
- (id)init;

@end
