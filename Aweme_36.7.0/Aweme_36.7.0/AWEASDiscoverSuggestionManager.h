@class NSArray, NSString;

@interface AWEASDiscoverSuggestionManager : NSObject

@property (retain, nonatomic) NSArray *dataList;
@property (retain, nonatomic) NSString *recommendQuery;

+ (id)sharedManager;

- (void)fetchDataWithCompleteBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clearCachedData;

@end
