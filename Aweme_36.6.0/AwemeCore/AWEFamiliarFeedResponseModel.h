@class NSArray, AWESmartFeedLastViewModel, AWECodeGenBubbleToastModel, NSString, NSNumber, AWECodeGenFamiliarTolerateModel;

@interface AWEFamiliarFeedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *recommendCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) AWESmartFeedLastViewModel *lastView;
@property (retain, nonatomic) NSNumber *updatedItemsCount;
@property (retain, nonatomic) NSNumber *insertCardIndex;
@property (retain, nonatomic) NSNumber *friendUpdateCount;
@property (retain, nonatomic) AWECodeGenBubbleToastModel *bubbleToastModel;
@property (nonatomic) BOOL shouldUseSnapShot;
@property (nonatomic) BOOL shouldDeleteSnapShot;
@property (nonatomic) BOOL shouldChangeSnapShot;
@property (copy, nonatomic) NSArray *invalidPrecacheAwemeIDs;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long cacheTimestamp;
@property (nonatomic) BOOL momentSpringDowngrade;
@property (retain, nonatomic) AWECodeGenFamiliarTolerateModel *familiarTolerate;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)lastViewJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
