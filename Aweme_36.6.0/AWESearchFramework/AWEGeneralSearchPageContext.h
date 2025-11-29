@class NSArray, NSString, NSDictionary;

@interface AWEGeneralSearchPageContext : NSObject

@property (copy, nonatomic) NSArray *frontAdShowTimes;
@property (copy, nonatomic) NSString *anchorQueryID;
@property (nonatomic) BOOL isNearbyRequest;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isSwitchTab;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSString *previousTab;
@property (copy, nonatomic) NSDictionary *searchExtraParams;
@property (copy, nonatomic) NSDictionary *suggestWordsExtra;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSDictionary *clientEngineExtra;
@property (copy, nonatomic) NSDictionary *clientServerExtra;
@property (nonatomic) BOOL fromHotSearch;
@property (nonatomic) BOOL notFirstSearch;
@property (nonatomic) BOOL shouldStoreHistory;
@property (copy, nonatomic) NSString *dyTabAdjust;

- (void).cxx_destruct;

@end
