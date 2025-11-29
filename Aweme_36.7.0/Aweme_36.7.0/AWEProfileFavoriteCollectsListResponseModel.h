@class NSArray, NSString, NSNumber;

@interface AWEProfileFavoriteCollectsListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *collectsInfoData;
@property (retain, nonatomic) NSString *favoriteStatusMsg;
@property (retain, nonatomic) NSString *logid;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *fileNumber;
@property (retain, nonatomic) NSNumber *favoriteStatusCode;

+ (id)collectsInfoDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
