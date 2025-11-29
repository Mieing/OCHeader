@class NSString, NSArray;
@protocol AWELiveHTSLiveEpisode;

@interface AWEVSFormatTabListModel : NSObject

@property (copy, nonatomic) NSString *titlePrefix;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSArray *imgURLs;
@property (copy, nonatomic) NSArray *backgroundURLs;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *seasonTag;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *vsEpisodeType;
@property (copy, nonatomic) NSString *vsEpisodeSubType;
@property (nonatomic) BOOL isLatest;
@property (nonatomic) unsigned long long directionType;
@property (retain, nonatomic) id<AWELiveHTSLiveEpisode> episode;
@property (nonatomic) BOOL isEpisodePurchase;
@property (nonatomic) BOOL hasPurchased;

- (void).cxx_destruct;

@end
