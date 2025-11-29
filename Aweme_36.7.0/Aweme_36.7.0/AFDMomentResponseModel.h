@class NSArray, NSNumber, NSString;

@interface AFDMomentResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *visitorList;
@property (nonatomic) BOOL hideVisitorList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *maxTimestamp;
@property (retain, nonatomic) NSNumber *minTimestamp;
@property (nonatomic) BOOL shouldShowMask;
@property (nonatomic) long long expireTimestamp;
@property (retain, nonatomic) NSString *toast;
@property (retain, nonatomic) NSString *skylightCursor;
@property (nonatomic) long long unreadCount;

+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)visitorListJSONTransformer;
+ (id)hideVisitorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
