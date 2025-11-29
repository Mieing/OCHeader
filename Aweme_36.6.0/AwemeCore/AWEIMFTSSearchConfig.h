@class NSString, NSArray, NSDictionary;

@interface AWEIMFTSSearchConfig : NSObject

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSArray *messageTypes;
@property (copy, nonatomic) NSArray *aweTypes;
@property (copy, nonatomic) NSArray *busTypes;
@property (copy, nonatomic) NSArray *contentTypes;
@property (copy, nonatomic) NSDictionary *lastSortOrderDict;
@property (copy, nonatomic) NSDictionary *extTypesDict;
@property (nonatomic) BOOL enableFuzzySearch;
@property (nonatomic) BOOL enableFuzzySearchV2;
@property (nonatomic) BOOL enableGroupMultiRecall;

- (void).cxx_destruct;

@end
