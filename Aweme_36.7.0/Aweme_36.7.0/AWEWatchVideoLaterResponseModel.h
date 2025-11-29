@class NSArray, NSNumber, AWEWatchLaterDiversionInfo;

@interface AWEWatchVideoLaterResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *invalidItemIDs;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *listNum;
@property (retain, nonatomic) AWEWatchLaterDiversionInfo *watchLaterDiversionInfo;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
