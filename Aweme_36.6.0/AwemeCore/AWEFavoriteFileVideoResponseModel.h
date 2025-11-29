@class NSArray, NSNumber, NSString;

@interface AWEFavoriteFileVideoResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *favoriteStatusCode;
@property (retain, nonatomic) NSString *favoriteStatusMsg;
@property (retain, nonatomic) NSString *logid;
@property (copy, nonatomic) NSArray *disabledItemIds;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
