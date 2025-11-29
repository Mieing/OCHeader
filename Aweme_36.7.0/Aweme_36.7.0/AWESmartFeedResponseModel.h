@class NSArray, AWESmartFeedLastViewModel, NSString, NSNumber;

@interface AWESmartFeedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *updateItemCount;
@property (retain, nonatomic) NSNumber *updateRoomCount;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *reRankType;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) AWESmartFeedLastViewModel *lastView;
@property (nonatomic) BOOL shouldUseSnapShot;
@property (nonatomic) BOOL shouldDeleteSnapShot;
@property (nonatomic) BOOL shouldChangeSnapShot;
@property (retain, nonatomic) NSNumber *updatedItemsCount;
@property (copy, nonatomic) NSString *blankPanelText;
@property (retain, nonatomic) NSNumber *alreadyLastView;
@property (retain, nonatomic) NSNumber *refreshCacheTimeout;
@property (nonatomic) BOOL useBackup;
@property (copy, nonatomic) NSString *mockInfoFilteredText;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)lastViewJSONTransformer;
+ (id)followFeed_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
