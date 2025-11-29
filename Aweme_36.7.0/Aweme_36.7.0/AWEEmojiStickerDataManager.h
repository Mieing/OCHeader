@class IESCategoryEffectsModel, NSArray, NSString, NSDictionary, NSMutableArray;
@protocol ACCStickerPannelLogger;

@interface AWEEmojiStickerDataManager : NSObject

@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSMutableArray *completionArray;
@property (copy, nonatomic) NSArray *emojiCategories;
@property (copy, nonatomic) NSArray *emojiEffects;
@property (retain, nonatomic) NSMutableArray *emojiTmpEffects;
@property (retain, nonatomic) IESCategoryEffectsModel *emojiCategoryEffects;
@property (nonatomic) BOOL emojiHasMore;
@property (nonatomic) long long emojiCursor;
@property (nonatomic) long long emojiSortingPosition;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (weak, nonatomic) id<ACCStickerPannelLogger> logger;
@property (copy, nonatomic) NSString *customEmojiPanelName;

- (id)stickeEmojiPanelName;
- (void)updateEmojiPagingInfoWithResponse:(id)a0 isLoadMore:(BOOL)a1;
- (void)autoLoadCachedEmojis;
- (void)downloadEmojisWithCompletion:(id /* block */)a0;
- (void)fetchEmojiPanelCategoriesAndDefaultEffects:(id /* block */)a0;
- (void)loadMoreEmojisWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
