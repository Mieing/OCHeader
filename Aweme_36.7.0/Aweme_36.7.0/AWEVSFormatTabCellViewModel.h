@class HTSLiveEpisode, UITableViewCell, NSString, HTSLiveImage, HTSLiveRoom;

@interface AWEVSFormatTabCellViewModel : NSObject

@property (weak, nonatomic) UITableViewCell *cell;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) HTSLiveImage *darkCover;
@property (retain, nonatomic) HTSLiveImage *lightCover;
@property (nonatomic) BOOL isVerticalStream;
@property (nonatomic) BOOL isLatest;
@property (nonatomic) BOOL isEpisodePurchase;
@property (nonatomic) BOOL hasPurchased;
@property (nonatomic) BOOL permissionDeniedForEpisodePurchase;
@property (copy, nonatomic) NSString *episodeType;
@property (copy, nonatomic) NSString *episodeSubType;
@property (copy, nonatomic) NSString *episodeStage;
@property (copy, nonatomic) NSString *playStatus;
@property (nonatomic) double height;

- (void).cxx_destruct;
- (id)init;

@end
