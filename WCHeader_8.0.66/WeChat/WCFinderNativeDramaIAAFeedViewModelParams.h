@class NSArray, WCFinderNativeDramaPromotionDataProvider;

@interface WCFinderNativeDramaIAAFeedViewModelParams : NSObject

@property (nonatomic) unsigned long long dramaID;
@property (nonatomic) int commentScene;
@property (nonatomic) int previousCommentScene;
@property (copy, nonatomic) NSArray *lockEpisodes;
@property (retain, nonatomic) WCFinderNativeDramaPromotionDataProvider *promotionDataProvider;

- (void).cxx_destruct;

@end
