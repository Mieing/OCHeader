@class NSArray, WCFinderNativeDramaPromotionDataService;

@interface WCFinderNativeDramaIAAFeedViewModelParams : NSObject

@property (nonatomic) unsigned long long dramaID;
@property (nonatomic) int commentScene;
@property (nonatomic) int previousCommentScene;
@property (copy, nonatomic) NSArray *lockEpisodes;
@property (retain, nonatomic) WCFinderNativeDramaPromotionDataService *promotionDataService;

- (void).cxx_destruct;

@end
